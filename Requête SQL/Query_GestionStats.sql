-- _________________________________________________________________________________________________ --
--                                           Statistiques                                            --
-- _________________________________________________________________________________________________ --

-- ______________________ Calcul du panier moyen après remise ______________________ --
SELECT AVG(TTC_O) AS PanierMoyen FROM Customer_Order;

-- ______________________ Calcul du chiffre d'affaires mensuel _____________________ --
DECLARE @MoisSelectionne INT;
SET @MoisSelectionne = 7;
DECLARE @AnneeSelectionnee INT;
SET @AnneeSelectionnee = 2023;

SELECT SUM(TTC_O) AS ChiffreAffairesMensuel FROM Customer_Order
WHERE
    MONTH(SD_O) = @MoisSelectionne
    AND YEAR(SD_O) = @AnneeSelectionnee;

-- ________ Identification des produits sous le seuil de réapprovisionnement _______ --
SELECT ID_A,
    R_A AS ReferenceProduit,
    N_A AS NomProduit,
    QC_A AS QuantiteEnStock
FROM Article
WHERE QC_A < RT_A;

-- _______________________ Montant total des achats par client _____________________ --
SELECT
    Customers.N_C AS NomClient,
    Customers.S_C AS PrenomClient,
    SUM(Customer_Order.TTC_O) AS MontantTotalAchats
FROM Customers
JOIN Customer_Order ON Customers.ID_C = Customer_Order.ID_C
GROUP BY Customers.N_C, Customers.S_C;

-- ____________________  Liste des 10 articles les plus vendus _____________________ --
SELECT TOP 10 R_A, N_A, SUM(QC_A) AS QuantiteVendue
FROM composed
JOIN Article ON composed.ID_A = Article.ID_A
GROUP BY R_A, N_A
ORDER BY QuantiteVendue DESC;

-- ____________________  Liste des 10 articles les moins vendus ____________________ --
SELECT TOP 10 R_A, N_A, SUM(QC_A) AS QuantiteVendue FROM composed
JOIN Article ON composed.ID_A = Article.ID_A
GROUP BY R_A, N_A
ORDER BY QuantiteVendue ASC;

-- ______________ Calcul de la valeur commerciale et d'achat du stock ______________ --
SELECT 
  CAST(SUM(QC_A * HT_A) AS DECIMAL(18, 2)) AS ValeurCommercialeStock,
  CAST(SUM(QC_A * (HT_A * TVA_A)) AS DECIMAL(18, 2)) AS ValeurAchatStock
FROM Article;
