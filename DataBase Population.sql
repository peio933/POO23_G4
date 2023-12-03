USE POO_Groupe4

-- Peuplement de la table Employee (50 personnes)
INSERT INTO Employee (N_E, S_E, HD_E, N1_E, ST_E) VALUES
-- Responsible
('Kevin', 'Doe', '2000-01-05', NULL, 1),
('Sandrine', 'Smith', '2000-02-15', NULL, 1),
('Corentin', 'Johnson', '1985-01-05', NULL, 1),
('Claude', 'Williams', '1985-01-05', NULL, 1),
('Gael', 'Brown', '1985-01-05', NULL, 1),
('Paul', 'Miller', '1985-01-05', NULL, 1),

-- Employee
('Emma', 'Jones', '1985-01-05', 'Corentin', 0),
('Frank', 'Davis', '1995-06-20', 'Sandrine', 0),
('Grace', 'Moore', '1997-07-03', 'Corentin', 0),
('Henry', 'Clark', '1999-08-28', 'Kevin', 0),
('Ivy', 'Taylor', '1990-09-14', 'Kevin', 0),
('Jack', 'Wilson', '1988-10-07', 'Kevin', 0),
('Katherine', 'Hill', '1986-11-11', 'Corentin', 0),
('Leo', 'Turner', '1984-12-22', 'Paul', 0),
('Mia', 'Baker', '1996-01-02', 'Paul', 0),
('Nathan', 'White', '1998-02-18', 'Sandrine', 0),
('Olivia', 'Scott', '1987-03-21', 'Sandrine', 0),
('Peter', 'Carter', '1989-04-09', 'Sandrine', 0),
('Quinn', 'Adams', '1992-05-16', 'Paul', 0),
('Riley', 'Evans', '1995-06-27', 'Sandrine', 0),
('Sophia', 'Fisher', '1998-07-30', 'Sandrine', 0),
('Thomas', 'Young', '1986-08-05', 'Corentin', 0),
('Ursula', 'Brown', '1990-09-17', 'Gael', 0),
('Vincent', 'Lopez', '1994-10-28', 'Kevin', 0),
('Wendy', 'Mitchell', '1985-11-14', 'Paul', 0),
('Xavier', 'Lee', '1997-12-03', 'Paul', 0),
('Yvonne', 'Johnson', '1988-01-19', 'Paul', 0),
('Zack', 'Thompson', '1986-02-24', 'Paul', 0),
('Abigail', 'Hall', '1993-03-07', 'Gael', 0),
('Benjamin', 'Lynch', '1995-04-13', 'Paul', 0),
('Catherine', 'Perry', '1991-05-25', 'Paul', 0),
('Daniel', 'Hayes', '1989-06-08', 'Sandrine', 0),
('Emily', 'Cole', '1987-07-16', 'Sandrine', 0),
('Finn', 'Ward', '1994-08-29', 'Sandrine', 0),
('Gabrielle', 'Hudson', '1999-09-11', 'Gael', 0),
('Harry', 'Morgan', '1996-10-27', 'Kevin', 0),
('Isabella', 'Fletcher', '1986-11-30', 'Corentin', 0),
('James', 'Russell', '1984-12-14', 'Gael', 0),
('Kylie', 'Daniels', '1992-01-04', 'Gael', 0),
('Liam', 'Ferguson', '1998-02-09', 'Paul', 0),
('Molly', 'Andrews', '1994-03-15', 'Corentin', 0),
('Nolan', 'Watson', '1985-04-26', 'Gael', 0),
('Oliver', 'Pierce', '1989-05-03', 'Corentin', 0),
('Paige', 'Fleming', '1995-06-18', 'Kevin', 0),
('Quentin', 'Reed', '1990-07-22', 'Corentin', 0),
('Rachel', 'Hart', '1996-08-02', 'Claude', 0),
('Samuel', 'Bryant', '1992-09-13', 'Claude', 0),
('Taylor', 'Webb', '1997-10-21', 'Claude', 0),
('Ulysses', 'Sullivan', '1986-11-23', 'Claude', 0),
('Violet', 'Fisher', '1984-12-30', 'Claude', 0);

-- Peuplement de la table Customers (10 personnes)
INSERT INTO Customers (N_C, S_C, BD_C) VALUES
('John', 'Smith', '1980-05-15'),
('Alice', 'Johnson', '1975-09-20'),
('David', 'Brown', '1992-03-08'),
('Emma', 'Williams', '1988-12-01'),
('Michael', 'Taylor', '1972-06-18'),
('Olivia', 'Miller', '1985-04-02'),
('William', 'Davis', '1990-11-10'),
('Sophia', 'Clark', '1978-07-25'),
('Ethan', 'Moore', '1983-09-30'),
('Ava', 'Anderson', '1995-02-14');

-- Peuplement de la table Customer_Order
INSERT INTO Customer_Order (R_O, DD_O, SD_O, PD_O, MOP_O, HT_O, TVA_O, TTC_O, ID_C) VALUES
('JOSM2010-PARIS-001', '2010-01-01', '2023-01-05', '2023-01-10', 'Carte de credit', 150.00, 0.20, 180.00, 1),
('JOSM2012-PARIS-002', '2012-04-26', '2012-05-26', '2012-05-20', 'Carte de credit', 10.00, 0.20, 12.00, 1),
('ALJO1998-LYON-001', '1998-02-15', '1998-02-20', '1998-02-25', 'Virement bancaire', 200.00, 0.20, 240.00, 2),
('DAWI2004-ANGERS-001', '2004-03-08', '2004-03-15', '2004-03-20', 'Cheque', 120.00, 0.20, 144.00, 3),
('EMWI2022-TOULON-001', '2022-04-01', '2023-04-05', '2023-04-10', 'Cheque', 180.00, 0.20, 216.00, 4),
('MATA1999-MARSEILLE-001', '1999-05-18', '1999-05-22', '1999-05-28', 'Virement bancaire', 250.00, 0.20, 300.00, 5),
('OLMI2008-TOURS-001', '2008-06-02', '2008-06-08', '2008-06-15', 'Carte de credit', 160.00, 0.20, 192.00, 6),
('WIDA2023-STRASBOURG-001', '2023-07-10', '2023-07-15', '2023-07-20', 'Cheque', 210.00, 0.20, 252.00, 7),
('SOCL2023-LYON-001', '2023-08-25', '2023-08-30', '2023-09-05', 'Cheque', 140.00, 0.20, 168.00, 8),
('ETMO2020-PARIS-001', '2020-09-30', '2020-10-05', '2020-10-10', 'Virement bancaire', 190.00, 0.20, 228.00, 9),
('AVAN2005-LYON-001', '2005-11-10', '2005-11-15', '2005-11-20', 'Carte de credit', 220.00, 0.20, 264.00, 10);

-- Peuplement de la table Article
/*INSERT INTO Article (R_A, N_A, QC_A, QS_A, RT_A, HT_A, TVA_A, D_A) VALUES
('LED_J', 'LED_Jaune', 50, 20, 5, 50.00, 0.20, 'Led de couleur jaune'),
('LED_R', 'LED_Rouge', 45, 18, 4, 45.00, 0.18, 'Led de couleur rouge'),
('RES_1K', 'Résistance 1kΩ', 100, 50, 10, 10.00, 0.10, 'Résistance de 1 kilo-ohm'),
('CAP_TOF', 'Capteur TOF', 30, 15, 3, 12.00, 0.15, 'Capteur Time of Flight, STmicroelectronics'),
('TRANS_NPN', 'Transistor NPN', 25, 10, 6, 80.00, 0.22, 'Transistor bipolaire NPN'),
('DIODE_1N4148', 'Diode 1N4148', 80, 40, 8, 2.00, 0.05, 'Diode de commutation rapide'),
('IC_555', 'Circuit intégré NE555', 15, 8, 7, 120.00, 0.25, 'Minuterie NE555'),
('SWITCH_SPST', 'Interrupteur SPST', 35, 25, 5, 5.50, 0.15, 'Interrupteur à simple pôle, simple jet'),
('POT_10K', 'Potentiomètre 10kΩ', 20, 12, 9, 15.00, 0.18, 'Potentiomètre linéaire de 10 kilo-ohms'),
('CAP_100nF', 'Condensateur 100nF', 60, 30, 4, 8.00, 0.10, 'Condensateur céramique de 100 nanofarads'),
('RES_470R', 'Résistance 470Ω', 75, 40, 11, 5.00, 0.10, 'Résistance de 470 ohms'),
('LED_V', 'LED_Verte', 55, 22, 6, 55.00, 0.20, 'Led de couleur verte'),
('IC_741', 'Circuit intégré LM741', 10, 5, 15, 150.00, 0.30, 'Amplificateur opérationnel LM741'),
('SWITCH_DPDT', 'Interrupteur DPDT', 28, 18, 7, 8.75, 0.15, 'Interrupteur à double pôle, double jet'),
('CAP_47uF', 'Condensateur 47uF', 40, 20, 5, 18.00, 0.15, 'Condensateur électrolytique de 47 microfarads'),
('RES_2K2', 'Résistance 2.2kΩ', 90, 55, 8, 12.00, 0.10, 'Résistance de 2.2 kilo-ohms'),
('TRANS_PNP', 'Transistor PNP', 22, 12, 7, 85.00, 0.22, 'Transistor bipolaire PNP'),
('DIODE_LED', 'Diode électroluminescente', 65, 30, 9, 1.50, 0.05, 'Diode LED standard'),
('IC_4017', 'Circuit intégré CD4017', 18, 10, 12, 180.00, 0.25, 'Décompteur/diviseur de fréquence CD4017'),
('SWITCH_TACT', 'Interrupteur tactile', 32, 20, 6, 3.50, 0.10, 'Interrupteur tactile à bouton poussoir');*/


-- Peuplement de la table Adress
INSERT INTO Adress (SNB, SN, N_V, PC, ID_C, ID_E) VALUES
(13, 'Rue de la Liberté', 'Paris', 75001, NULL, 0),
(76, 'Avenue des Gobelins', 'Marseille', 13002, NULL, 1),
(99, 'Boulevard de l Université', 'Lyon', 69003, NULL, 2),
(26, 'Rue Jean Jaurès', 'Bordeaux', 33000, NULL, 3),
(1, 'Avenue Victor Hugo', 'Nice', 06000, NULL, 4),
(34, 'Boulevard de Strasbourg', 'Toulouse', 31000, NULL, 5);

INSERT INTO Adress (SNB, SN, N_V, PC, ID_C, ID_E) VALUES
(27, 'Rue de la Liberté', 'Marseille', 13001, NULL, 6),
(98, 'Avenue des Gobelins', 'Paris', 75013, NULL, 7),
(73, 'Boulevard de l Université', 'Toulouse', 31000, NULL, 8),
(19, 'Rue Jean Jaurès', 'Lille', 59000, NULL, 9),
(10, 'Avenue Victor Hugo', 'Nice', 06000, NULL, 10),
(123, 'Boulevard de Strasbourg', 'Bordeaux', 33000, NULL, 11),
(142, 'Rue de la République', 'Lyon', 69002, NULL, 12),
(104, 'Avenue de la Libération', 'Montpellier', 34000, NULL, 13),
(1, 'Boulevard de la Corderie', 'Nantes', 44000, NULL, 14),
(4, 'Rue du Faubourg Saint-Antoine', 'Paris', 75011, NULL, 15),
(39, 'Avenue de la Tranchée', 'Tours', 37000, NULL, 16),
(8, 'Boulevard Gambetta', 'Cannes', 06400, NULL, 17),
(53, 'Rue du Prado', 'Marseille', 13006, NULL, 18),
(83, 'Avenue de la République', 'Nancy', 54000, NULL, 19),
(9, 'Boulevard de l Europe', 'Lyon', 69007, NULL, 20),
(11, 'Rue du Cherche-Midi', 'Paris', 75006, NULL, 21),
(95, 'Avenue du Général Leclerc', 'Versailles', 78000, NULL, 22),
(71, 'Boulevard de la Paix', 'Nice', 06000, NULL, 23),
(147, 'Rue de la Cannebière', 'Marseille', 13001, NULL, 24),
(97, 'Avenue Jean Médecin', 'Nice', 06000, NULL, 25),
(89, 'Boulevard des Allées', 'Toulouse', 31000, NULL, 26),
(66, 'Rue de la Guillotière', 'Lyon', 69003, NULL, 27),
(22, 'Avenue de la Liberté', 'Lille', 59000, NULL, 28),
(55, 'Boulevard de l Europe', 'Paris', 75015, NULL, 29),
(153, 'Rue du Faubourg Saint-Honoré', 'Paris', 75008, NULL, 30),
(154, 'Avenue de la Porte des Ternes', 'Paris', 75017, NULL, 31),
(38, 'Boulevard de la Croix-Rousse', 'Lyon', 69004, NULL, 32),
(23, 'Rue de la République', 'Marseille', 13002, NULL, 33),
(67, 'Avenue du Prado', 'Marseille', 13008, NULL, 34),
(900, 'Boulevard de la Villette', 'Paris', 75019, NULL, 35),
(132, 'Rue du Faubourg Saint-Antoine', 'Paris', 75012, NULL, 36),
(57, 'Avenue des Gobelins', 'Paris', 75005, NULL, 37),
(84, 'Boulevard de l Indépendance', 'Lille', 59000, NULL, 38),
(7, 'Rue de la Paix', 'Nice', 06000, NULL, 39),
(3, 'Avenue de la Libération', 'Marseille', 13004, NULL, 40),
(10, 'Boulevard Gambetta', 'Nice', 06000, NULL, 41),
(13, 'Rue de la Cannebière', 'Marseille', 13001, NULL, 42),
(26, 'Avenue Jean Jaurès', 'Lyon', 69007, NULL, 43),
(39, 'Boulevard des Allées', 'Toulouse', 31000, NULL, 44),
(26, 'Rue de la République', 'Lille', 59000, NULL, 45),
(65, 'Avenue du Général Leclerc', 'Versailles', 78000, NULL, 46),
(91, 'Boulevard de la Paix', 'Nice', 06000, NULL, 47),
(12, 'Rue de la Guillotière', 'Lyon', 69003, NULL, 48),
(103, 'Avenue de la Liberté', 'Lille', 59000, NULL, 49);

INSERT INTO Adress (SNB, SN, N_V, PC, ID_C, ID_E) VALUES
(5, 'Boulevard des Champs-Élysées', 'Paris', 75008, 0, NULL),
(87, 'Rue de la République', 'Lyon', 69002, 1, NULL),
(92, 'Avenue du Général de Gaulle', 'Angers', 49100, 2, NULL),
(15, 'Boulevard de Strasbourg', 'Toulon', 83000, 3, NULL),
(107, 'Rue de la Canebière', 'Marseille', 13001, 4, NULL),
(45, 'Avenue de la Tranchée', 'Tours', 37000, 5, NULL),
(22, 'Boulevard de l Indépendance', 'Strasbourg', 67000, 6, NULL),
(67, 'Rue de la République', 'Lyon', 69001, 7, NULL),
(93, 'Avenue des Champs-Élysées', 'Paris', 75001, 8, NULL),
(15, 'Boulevard de la Croix-Rousse', 'Lyon', 69004, 9, NULL);


-- Peuplement de la table composed
INSERT INTO composed (ID_O, ID_A) VALUES
-- Commande 1
(1, 1),  -- JOSM2010-PARIS-001 - LED_J
(1, 2),  -- JOSM2010-PARIS-001 - LED_R
-- Commande 2
(2, 10),  -- JOSM2012-PARIS-002 - CAP_100nF
(2, 11),  -- JOSM2012-PARIS-002 - RES_470R
(2, 12),  -- JOSM2012-PARIS-002 - LED_V
-- Commande 3
(3, 20),  -- ALJO1998-LYON-001 - SWITCH_TACT
(3, 1),   -- ALJO1998-LYON-001 - LED_J
(3, 2),   -- ALJO1998-LYON-001 - LED_R
-- Commande 4
(4, 13),  -- DAWI2004-ANGERS-001 - IC_741
(4, 1),   -- DAWI2004-ANGERS-001 - LED_J
(4, 4),   -- DAWI2004-ANGERS-001 - CAP_TOF
-- Commande 5
(5, 17),  -- EMWI2022-TOULON-001 - TRANS_PNP
(5, 18),  -- EMWI2022-TOULON-001- DIODE_LED
(5, 19),  -- EMWI2022-TOULON-001- IC_4017
-- Commande 6
(6, 13),  -- MATA1999-MARSEILLE-001 - IC_741
(6, 14),  -- MATA1999-MARSEILLE-001 - SWITCH_DPDT
(6, 15),  -- MATA1999-MARSEILLE-001 - CAP_47uF
(6, 16),  -- MATA1999-MARSEILLE-001 - RES_2K2
-- Commande 7
(7, 8),  -- OLMI2008-TOURS-001 - SWITCH_SPST
(7, 9),  -- OLMI2008-TOURS-001 - POT_10K
-- Commande 8
(8, 3),  -- WIDA2023-STRASBOURG-001 - RES_1K
(8, 4),  -- WIDA2023-STRASBOURG-001 - CAP_TOF
(8, 5),  -- WIDA2023-STRASBOURG-001 - TRANS_NPN
-- Commande 9
(9, 6),  -- SOCL2023-LYON-001 - DIODE_1N4148
(9, 7),  -- SOCL2023-LYON-001 - IC_555
-- Commande 10
(10, 15),  -- ETMO2020-PARIS-001 - CAP_47uF
(10, 18),  -- ETMO2020-PARIS-001 - DIODE_LED
(10, 1),   -- ETMO2020-PARIS-001 - LED_J
-- Commande 11
(11, 14),  -- AVAN2005-LYON-001 - SWITCH_DPDT
(11, 15),  -- AVAN2005-LYON-001 - CAP_47uF
(11, 11);  -- AVAN2005-LYON-001 - RES_470R
