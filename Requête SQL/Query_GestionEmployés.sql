-- ________________________________________________________________________________ --
--                               Gestion des employés                               --
-- ________________________________________________________________________________ --
USE POO_Groupe4;

-- _______________ Variables Employé ______________ --
DECLARE @Nom VARCHAR(30);
SET @Nom = 'Noiret';

DECLARE @Prenom VARCHAR(30);
SET @Prenom = 'Robin';

DECLARE @DateEmbauche DATE;
SET @DateEmbauche = '2022-04-26';

DECLARE @Responsable VARCHAR(30);
SET @Responsable = 'NULL';

DECLARE @Statut BIT;
SET @Statut = '1';

DECLARE @NumRue INT
Set @NumRue = '26';

DECLARE @NomRue VARCHAR(100)
Set @NomRue = 'Rue de la République';

DECLARE @Ville VARCHAR(50)
Set @Ville = 'Lyon';

DECLARE @CodePostal INT
Set @CodePostal = '69002';

-- ____________________ Create ____________________ --
INSERT INTO Employee (N_E, S_E, HD_E, N1_E, ST_E)
VALUES (@Prenom, @Nom, @DateEmbauche, @Responsable, 1);

DECLARE @EmployeeID INT;
SET @EmployeeID = SCOPE_IDENTITY();

INSERT INTO Adress (SNB, SN, N_V, PC, ID_E)
VALUES (@NumRue, @NomRue, @Ville, @CodePostal, @EmployeeID);

-- _____________________ Read _____________________ --
SELECT 
    Employee.N_E AS Nom,
    Employee.S_E AS Prénom,
    Employee.HD_E AS [Date dEmbauche],
    Employee.N1_E AS Responsable,
    Employee.ST_E AS Statut,
    Adress.SNB AS [Numéro de rue],
    Adress.SN AS [Nom de rue],
    Adress.N_V AS Ville,
    Adress.PC AS [Code postal]
FROM 
    Employee
INNER JOIN 
    Adress ON Employee.ID_E = Adress.ID_E
WHERE 
    Employee.S_E = @Nom

-- ____________________ Update ____________________ --
UPDATE Employee
SET N_E = 'NouveauNom', S_E = 'NouveauPrenom', HD_E = 'NouvelleDateEmbauche'
WHERE S_E = @Nom AND N_E = @Prenom AND HD_E = @DateEmbauche;

-- ____________________ Delete ____________________ --
DELETE FROM Employee 
WHERE S_E = @Nom AND N_E = @Prenom AND HD_E = @DateEmbauche;
