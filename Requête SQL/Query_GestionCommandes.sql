-- ________________________________________________________________________________ --
--                              Gestion des commandes                               --
-- ________________________________________________________________________________ --
USE POO_Groupe4;

-- _______________ Variables Commandes ______________ --
DECLARE @NomClient VARCHAR(30);
SET @NomClient = 'Douvre';

DECLARE @PrenomClient VARCHAR(30);
SET @PrenomClient = 'Laurent';

DECLARE @CustomerID INT;
SET @CustomerID = (SELECT ID_C FROM Customers WHERE N_C = @PrenomClient AND S_C = @NomClient);

DECLARE @VilleClient VARCHAR(50);
SELECT @VilleClient = N_V FROM Adress WHERE ID_C = @CustomerID;

DECLARE @NumeroCommande INT;
SET @NumeroCommande = ISNULL((SELECT MAX(CAST(RIGHT(R_O, 3) AS INT)) FROM Customer_Order WHERE ID_C = @CustomerID), 0) + 1;

DECLARE @DateCommande DATE;
SET @DateCommande = '2023-12-01';

DECLARE @DateLivraison DATE;
SET @DateLivraison = '2023-12-05';

DECLARE @DatePaiement DATE;
SET @DatePaiement = '2023-12-01';

DECLARE @MoyenPaiement VARCHAR(30);
SET @MoyenPaiement = 'Cheque';

DECLARE @TVA DECIMAL(3, 2);
SET @TVA = 0.20;

DECLARE @ReferenceArticle VARCHAR(30);
SET @ReferenceArticle = 'LED_J';

DECLARE @QuantiteArticle INT;
SET @QuantiteArticle = 2;

DECLARE @PrixHT MONEY;
DECLARE @PrixTTC MONEY;
SELECT @PrixHT = HT_A FROM Article WHERE R_A = @ReferenceArticle;
SET @PrixHT = @PrixHT * @QuantiteArticle;
SET @PrixTTC = @PrixHT * (1+@TVA);

DECLARE @Message NVARCHAR(100);
SET @Message = 'Le client est introuvable !';


-- ____________________ Create ____________________ --
-- Si le client existe
IF @CustomerID IS NOT NULL
BEGIN
    -- Création d'une nouvelle commande liée au client existant
    DECLARE @ReferenceCommande VARCHAR(50);
    SET @ReferenceCommande = LEFT(@PrenomClient, 2) + LEFT(@NomClient, 2) + CONVERT(VARCHAR(4), YEAR(GETDATE())) + @VilleClient + RIGHT('000' + CAST(@NumeroCommande AS VARCHAR(3)), 3);

	INSERT INTO Customer_Order (R_O, DD_O, SD_O, PD_O, MOP_O, HT_O, TVA_O, TTC_O, ID_C)
	VALUES (@ReferenceCommande, @DateCommande, @DateLivraison, @DatePaiement, @MoyenPaiement, @PrixHT, @TVA, @PrixTTC, @CustomerID);

	UPDATE Article
	SET QC_A = @QuantiteArticle
	WHERE R_A = @ReferenceArticle;

	-- Récupération de l'ID_O de la commande créée
	DECLARE @OrderID INT;
	SET @OrderID = SCOPE_IDENTITY();

	-- Ajout des articles à la commande dans la table composed
	INSERT INTO composed (ID_O, ID_A)
	VALUES (@OrderID, (SELECT ID_A FROM Article WHERE R_A = @ReferenceArticle));

	-- Mise à jour de la quantité dans le stock dans la table Article
	UPDATE Article
	SET QS_A = QS_A - @QuantiteArticle
	WHERE R_A = @ReferenceArticle;
END
ELSE
BEGIN
	PRINT @Message;
END

-- _____________________ Read _____________________ --

DECLARE @ReferenceCommande VARCHAR(50);
SET @ReferenceCommande = 'LaDo2023Paris002';

-- Récupérer les détails de la commande
SELECT
    co.R_O AS ReferenceCommande,
    co.DD_O AS DateCommande,
    co.SD_O AS DateLivraison,
    co.PD_O AS DatePaiement,
    co.MOP_O AS MoyenPaiement,
    co.HT_O AS PrixHT,
    co.TVA_O AS TVA,
    co.TTC_O AS PrixTTC,
    a.R_A AS ReferenceArticle,
    a.QC_A AS QuantiteCommandee
FROM
    Customer_Order co
JOIN
    composed c ON co.ID_O = c.ID_O
JOIN
    Article a ON c.ID_A = a.ID_A
WHERE
    co.R_O = @ReferenceCommande;

-- ____________________ Update ____________________ --

DECLARE @ReferenceCommandeToUpdate VARCHAR(50);
SET @ReferenceCommandeToUpdate = 'LaDo2023Paris002';

DECLARE @NewQuantiteArticle INT;
SET @NewQuantiteArticle = 4;

UPDATE a
SET QC_A = @NewQuantiteArticle
FROM Article a
INNER JOIN composed c ON a.ID_A = c.ID_A
INNER JOIN Customer_Order co ON c.ID_O = co.ID_O
WHERE co.R_O = @ReferenceCommandeToUpdate;

-- ____________________ Delete ____________________ --

DECLARE @ReferenceCommande VARCHAR(50);
SET @ReferenceCommande = 'LaDo2023Paris002'; 

DECLARE @ID_Commande INT;
SET @ID_Commande = (SELECT ID_O FROM Customer_Order WHERE R_O = @ReferenceCommande);

DELETE FROM composed WHERE ID_O = @ID_Commande;
DELETE FROM Customer_Order WHERE ID_O = @ID_Commande;




