#include "CLMapCustomers.h"

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

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Insert(void)
{
    return "INSERT INTO Customers(N_C, S_C, BD_C) "
        "VALUES('" + getN_C() + "', '" + getS_C() + "', '" + getBD_C() + "'); "
        "DECLARE @CustomerID INT; "
        "SET @CustomerID = SCOPE_IDENTITY(); "
        "INSERT INTO Adress(SNB, SN, N_V, PC, ID_C) "
        "VALUES('" + getSNB() + "', '" + getSN() + "', '" + getN_V() + "', '" + getPC() + "', @CustomerID); ";
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Delete(void)
{
    return "DELETE FROM Customers "
        "WHERE S_C = '" + getS_C() + "' "
        "AND N_C = '" + getN_C() + "' "
        "AND BD_C = '" + getBD_C() + "'; ";
}

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

void NS_Comp_Map_Cus::CLMapCustomers::setS_C(System::String^ S_C)
{
    this->S_C = S_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setN_C(System::String^ N_C)
{
    this->N_C = N_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setBD_C(System::String^ BD_C)
{
    this->BD_C = BD_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setNw_C(System::String^ Nw_C)
{
    this->Nw_C = Nw_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setBDw_C(System::String^ BDw_C)
{
    this->BDw_C = BDw_C;
}


void NS_Comp_Map_Cus::CLMapCustomers::setID_CY(System::String^ ID_CY)
{
    this->ID_CY = ID_CY;
}

void NS_Comp_Map_Cus::CLMapCustomers::setN_V(System::String^ N_V)
{
    this->N_V = N_V;
}

void NS_Comp_Map_Cus::CLMapCustomers::setID_SN(System::String^ ID_SN)
{
    this->ID_SN = ID_SN;
}

void NS_Comp_Map_Cus::CLMapCustomers::setSN(System::String^ SN)
{
    this->SN = SN;
}

void NS_Comp_Map_Cus::CLMapCustomers::setID_SNB(System::String^ ID_SNB)
{
    this->ID_SNB = ID_SNB;
}

void NS_Comp_Map_Cus::CLMapCustomers::setSNB(System::String^ SNB)
{
    this->SNB = SNB;
}

void NS_Comp_Map_Cus::CLMapCustomers::setID_PC(System::String^ ID_PC)
{
    this->ID_PC = ID_PC;
}

void NS_Comp_Map_Cus::CLMapCustomers::setPC(System::String^ PC)
{
    this->PC = PC;
}


System::String^ NS_Comp_Map_Cus::CLMapCustomers::getS_C(void)
{
    return this->S_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getN_C(void)
{
    return this->N_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getBD_C(void)
{
    return this->BD_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getNw_C(void)
{
    return this->Nw_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getBDw_C(void)
{
    return this->BDw_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_CY(void)
{
    return this->ID_CY;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getN_V(void)
{
    return this->N_V;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_SN(void)
{
    return this->ID_SN;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getSN(void)
{
    return this->SN;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_SNB(void)
{
    return this->ID_SNB;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getSNB(void)
{
    return this->SNB;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_PC(void)
{
    return this->ID_PC;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getPC(void)
{
    return this->PC;
}