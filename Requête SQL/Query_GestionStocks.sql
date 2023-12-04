-- ________________________________________________________________________________ --
--                                 Gestion des stocks                               --
-- ________________________________________________________________________________ --
USE POO_Groupe4;

-- _______________ Variables Article ______________ --
DECLARE @ReferenceArticle VARCHAR(60);
SET @ReferenceArticle = 'LED_V';

DECLARE @NomArticle VARCHAR(60);
SET @NomArticle = 'LED_Verte';

DECLARE @QuantiteEnStock INT;
SET @QuantiteEnStock = 1200;

DECLARE @QuantiteMinimale INT;
SET @QuantiteMinimale = 25;

DECLARE @PrixHT MONEY;
SET @PrixHT = 0.25;

DECLARE @TVA DECIMAL(3, 2);
SET @TVA = 0.20;

DECLARE @Description VARCHAR(100);
SET @Description = 'Led de couleur verte, utile pour la réalisation de petit projet d électronique';


-- ____________________ Create ____________________ --
INSERT INTO Article (R_A, N_A, QC_A, QS_A, RT_A, HT_A, TVA_A, D_A)
VALUES (@ReferenceArticle, @NomArticle, NULL, @QuantiteEnStock, @QuantiteMinimale, @PrixHT, @TVA, @Description);

-- _____________________ Read _____________________ --
SELECT * FROM Article
WHERE R_A = @ReferenceArticle;

-- ____________________ Update ____________________ --
UPDATE Article
SET QS_A = 'Quantité en stock', HT_A = 'Prix HT',RT_A = 'Seuil', TVA_A = 'Pourcentage TVA', D_A = 'Nouvelle description'
WHERE R_A = @ReferenceArticle;

-- ____________________ Delete ____________________ --
DELETE FROM Article 
WHERE R_A = @ReferenceArticle AND N_A = @NomArticle;
