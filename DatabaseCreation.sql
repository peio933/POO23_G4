CREATE DATABASE POO_Groupe4;
USE POO_Groupe4;

CREATE TABLE Employee(
   ID_E INT IDENTITY,
   N_E VARCHAR(30) ,
   S_E VARCHAR(30) ,
   HD_E DATE,
   N1_E VARCHAR(30) ,
   ST_E BIT,
   PRIMARY KEY(ID_E)
);

CREATE TABLE Customers(
   ID_C INT IDENTITY,
   N_C VARCHAR(30) ,
   S_C VARCHAR(30) ,
   BD_C DATE,
   PRIMARY KEY(ID_C)
);

CREATE TABLE Customer_Order(
   ID_O INT IDENTITY,
   R_O VARCHAR(60) ,
   DD_O DATE,
   SD_O DATE,
   PD_O DATE,
   MOP_O VARCHAR(30) ,
   HT_O MONEY,
   TVA_O DECIMAL(3,2)  ,
   TTC_O MONEY,
   ID_C INT NOT NULL,
   PRIMARY KEY(ID_O),
   FOREIGN KEY(ID_C) REFERENCES Customers(ID_C)
);

CREATE TABLE Article(
   ID_A INT IDENTITY,
   R_A VARCHAR(60) ,
   N_A VARCHAR(50) ,
   QC_A INT,
   QS_A INT,
   RT_A INT,
   HT_A MONEY,
   TVA_A DECIMAL(3,2)  ,
   D_A VARCHAR(100) ,
   PRIMARY KEY(ID_A)
);

CREATE TABLE Adress(
   ID_A INT IDENTITY,
   SNB INT,
   SN VARCHAR(100) ,
   N_V VARCHAR(50) ,
   PC TINYINT,
   ID_C INT NOT NULL,
   ID_E INT NOT NULL,
   PRIMARY KEY(ID_A),
   FOREIGN KEY(ID_C) REFERENCES Customers(ID_C),
   FOREIGN KEY(ID_E) REFERENCES Employee(ID_E)
);

CREATE TABLE composed(
   ID_O INT,
   ID_A INT,
   PRIMARY KEY(ID_O, ID_A),
   FOREIGN KEY(ID_O) REFERENCES Customer_Order(ID_O),
   FOREIGN KEY(ID_A) REFERENCES Article(ID_A)
);
