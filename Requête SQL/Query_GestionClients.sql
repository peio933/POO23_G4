-- ________________________________________________________________________________ --
--                               Gestion des clients                                --
-- ________________________________________________________________________________ --
USE POO_Groupe4;

-- _______________ Variables Client ______________ --
DECLARE @NomClient VARCHAR(30);
SET @NomClient = 'Laurent';

DECLARE @PrenomClient VARCHAR(30);
SET @PrenomClient = 'Douvre';

DECLARE @DateNaissance DATE;
SET @DateNaissance = '1990-01-15';

DECLARE @NumRueClient INT;
SET @NumRueClient = '14';

DECLARE @NomRueClient VARCHAR(100);
SET @NomRueClient = 'Avenue des Champs-Élysées';

DECLARE @VilleClient VARCHAR(50);
SET @VilleClient = 'Paris';

DECLARE @CodePostalClient INT;
SET @CodePostalClient = '75008';

-- ____________________ Create ____________________ --
INSERT INTO Customers (N_C, S_C, BD_C)
VALUES (@PrenomClient, @NomClient, @DateNaissance);

DECLARE @CustomerID INT;
SET @CustomerID = SCOPE_IDENTITY();


INSERT INTO Adress (SNB, SN, N_V, PC, ID_C)
VALUES (@NumRueClient, @NomRueClient, @VilleClient, @CodePostalClient, @CustomerID);

-- _____________________ Read _____________________ --
SELECT 
    Customers.N_C AS Nom,
    Customers.S_C AS Prénom,
    Customers.BD_C AS [Date de Naissance],
    Adress.SNB AS [Numéro de rue],
    Adress.SN AS [Nom de rue],
    Adress.N_V AS Ville,
    Adress.PC AS [Code postal]
FROM 
    Customers
INNER JOIN 
    Adress ON Customers.ID_C = Adress.ID_C
WHERE 
    Customers.N_C = @NomClient;

-- ____________________ Update ____________________ --

UPDATE Customers
SET N_C = 'Laurent', S_C = 'Douvre', BD_C = '1990-01-15'
WHERE S_C = @NomClient AND N_C = @PrenomClient AND BD_C = @DateNaissance;

-- ____________________ Delete ____________________ --
DELETE FROM Customers 
WHERE S_C = @NomClient AND N_C = @PrenomClient AND BD_C = @DateNaissance;
