#include "CLMapCustomers.h"


// Fonction SelectAll : Renvoie une requ�te SQL pour s�lectionner tous les clients avec leurs adresses.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::SelectAll(void)
{
    return "SELECT Customers.S_C AS Nom, "
            "Customers.N_C AS Prenom, "
            "Customers.BD_C AS [Date de Naissance], "
            "Adress.SNB AS [Numero de rue], "
            "Adress.SN AS [Nom de rue], "
            "Adress.N_V AS Ville, "
            "Adress.PC AS [Code postal] "
            "FROM Customers "
            "INNER JOIN Adress ON Customers.ID_C = Adress.ID_C ";
}

// Fonction Select : Renvoie une requ�te SQL pour s�lectionner un client sp�cifique par son nom (S_C).
System::String^ NS_Comp_Map_Cus::CLMapCustomers::Select(void)
{
    return "SELECT Customers.S_C AS Nom, "
            "Customers.N_C AS Prenom, "
            "Customers.BD_C AS [Date de Naissance], "
            "Adress.SNB AS [Numero de rue], "
            "Adress.SN AS [Nom de rue], "
            "Adress.N_V AS Ville, "
            "Adress.PC AS [Code postal] "
            "FROM Customers "
            "INNER JOIN Adress ON Customers.ID_C = Adress.ID_C "
            "WHERE Customers.S_C = '" + getS_C() + "'; ";
}

// Fonction Insert : Renvoie une requ�te SQL pour ins�rer un nouveau client avec son adresse.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::Insert(void)
{
    return "INSERT INTO Customers(N_C, S_C, BD_C) "
            "VALUES('" + getN_C() + "', '" + getS_C() + "', '" + getBD_C() + "'); "
            "DECLARE @CustomerID INT; "
            "SET @CustomerID = SCOPE_IDENTITY(); "
            "INSERT INTO Adress(SNB, SN, N_V, PC, ID_C) "
            "VALUES('" + getSNB() + "', '" + getSN() + "', '" + getN_V() + "', '" + getPC() + "', @CustomerID); ";
}

// Fonction Delete : Renvoie une requ�te SQL pour supprimer un client sp�cifique par son nom, pr�nom et date de naissance.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::Delete(void)
{
    return "DELETE FROM Customers "
            "WHERE S_C = '" + getS_C() + "' "
            "AND N_C = '" + getN_C() + "' "
            "AND BD_C = '" + getBD_C() + "'; ";
}

// Fonction Update : Renvoie une requ�te SQL pour mettre � jour les informations d'un client sp�cifique.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::Update(void)
{
    return "UPDATE Customers "
            "SET N_C = '" + getNw_C() + "', "
            "S_C = '" + getS_C() + "', "
            "BD_C = '" + getBDw_C() + "' "
            "WHERE S_C = '" + getS_C() + "' "
            "AND N_C = '" + getN_C() + "' "
            "AND BD_C = '" + getBD_C() + "'; ";
}

// Fonction setS_C : D�finit le nom du client.
void NS_Comp_Map_Cus::CLMapCustomers::setS_C(System::String^ S_C)
{
    this->S_C = S_C;
}

// Fonction setN_C : D�finit le pr�nom du client.
void NS_Comp_Map_Cus::CLMapCustomers::setN_C(System::String^ N_C)
{
    this->N_C = N_C;
}

// Fonction setBD_C : D�finit la date de naissance du client.
void NS_Comp_Map_Cus::CLMapCustomers::setBD_C(System::String^ BD_C)
{
    this->BD_C = BD_C;
}

// Fonction setNw_C : D�finit le nouveau pr�nom du client (utilis� dans la mise � jour).
void NS_Comp_Map_Cus::CLMapCustomers::setNw_C(System::String^ Nw_C)
{
    this->Nw_C = Nw_C;
}

// Fonction setBDw_C : D�finit la nouvelle date de naissance du client (utilis�e dans la mise � jour).
void NS_Comp_Map_Cus::CLMapCustomers::setBDw_C(System::String^ BDw_C)
{
    this->BDw_C = BDw_C;
}

// Fonction setID_CY : D�finit l'ID de la ville du client.
void NS_Comp_Map_Cus::CLMapCustomers::setID_CY(System::String^ ID_CY)
{
    this->ID_CY = ID_CY;
}

// Fonction setN_V : D�finit le nom de la ville du client.
void NS_Comp_Map_Cus::CLMapCustomers::setN_V(System::String^ N_V)
{
    this->N_V = N_V;
}

// Fonction setID_SN : D�finit l'ID de la rue du client.
void NS_Comp_Map_Cus::CLMapCustomers::setID_SN(System::String^ ID_SN)
{
    this->ID_SN = ID_SN;
}

// Fonction setSN : D�finit le nom de la rue du client.
void NS_Comp_Map_Cus::CLMapCustomers::setSN(System::String^ SN)
{
    this->SN = SN;
}

// Fonction setID_SNB : D�finit l'ID du num�ro de rue du client.
void NS_Comp_Map_Cus::CLMapCustomers::setID_SNB(System::String^ ID_SNB)
{
    this->ID_SNB = ID_SNB;
}

// Fonction setSNB : D�finit le num�ro de rue du client.
void NS_Comp_Map_Cus::CLMapCustomers::setSNB(System::String^ SNB)
{
    this->SNB = SNB;
}

// Fonction setID_PC : D�finit l'ID du code postal du client.
void NS_Comp_Map_Cus::CLMapCustomers::setID_PC(System::String^ ID_PC)
{
    this->ID_PC = ID_PC;
}

// Fonction setPC : D�finit le code postal du client.
void NS_Comp_Map_Cus::CLMapCustomers::setPC(System::String^ PC)
{
    this->PC = PC;
}

// Fonction getS_C : Renvoie le nom du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getS_C(void)
{
    return this->S_C;
}

// Fonction getN_C : Renvoie le pr�nom du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getN_C(void)
{
    return this->N_C;
}

// Fonction getBD_C : Renvoie la date de naissance du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getBD_C(void)
{
    return this->BD_C;
}

// Fonction getNw_C : Renvoie le nouveau pr�nom du client (utilis� dans la mise � jour).
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getNw_C(void)
{
    return this->Nw_C;
}

// Fonction getBDw_C : Renvoie la nouvelle date de naissance du client (utilis�e dans la mise � jour).
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getBDw_C(void)
{
    return this->BDw_C;
}

// Fonction getID_CY : Renvoie l'ID de la ville du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_CY(void)
{
    return this->ID_CY;
}

// Fonction getN_V : Renvoie le nom de la ville du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getN_V(void)
{
    return this->N_V;
}

// Fonction getID_SN : Renvoie l'ID de la rue du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_SN(void)
{
    return this->ID_SN;
}

// Fonction getSN : Renvoie le nom de la rue du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getSN(void)
{
    return this->SN;
}

// Fonction getID_SNB : Renvoie l'ID du num�ro de rue du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_SNB(void)
{
    return this->ID_SNB;
}

// Fonction getSNB : Renvoie le num�ro de rue du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getSNB(void)
{
    return this->SNB;
}

// Fonction getID_PC : Renvoie l'ID du code postal du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_PC(void)
{
    return this->ID_PC;
}

// Fonction getPC : Renvoie le code postal du client.
System::String^ NS_Comp_Map_Cus::CLMapCustomers::getPC(void)
{
    return this->PC;
}
