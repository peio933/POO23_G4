#include "CLMapCustomers.h"

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Select(void)
{
    return "SELECT Customers.N_C"
        "AS Nom, Customers.S_C"
        "AS Prénom, Customers.BD_C"
        "AS[Date de Naissance], Adress.SNB"
        "AS[Numéro de rue], Adress.SN"
        "AS[Nom de rue], Adress.N_V"
        "AS Ville, Adress.PC"
        "AS[Code postal]"
        "FROM Customers"
        "INNER JOIN Adress ON Customers.ID_C = Adress.ID_C"
        "WHERE Customers.N_C = " + getN_C() + "t";
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Insert(void)
{
    return "INSERT INTO Customers(N_C, S_C, BD_C)"
        "VALUES(" + getN_C() +", " + getS_C() + ", " + getBD_C() + ")"
        "DECLARE " + getID_C() + " INT SET " + getID_C() + " = SCOPE_IDENTITY()"
        "INSERT INTO Adress(SNB, SN, N_V, PC, ID_C)"
        "VALUES(" + this->oAdress->getSNB() + ", " + this->oAdress->getSN() + ", " + this->oAdress->getN_V() + ", " + this->oAdress->getPC() + ", " + getID_C() + ")";

}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Delete(void)
{
    return "DELETE FROM Customers"
        "WHERE S_C = " + getN_C() + ""
        "AND N_C = " + getS_C() + ""
        "AND BD_C = " + getBD_C() + "";
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::Update(void)
{
    return "UPDATE Customers"
        "SET N_C = 'NouveauNomClient',"
        "S_C = 'NouveauPrenomClient',"
        "BD_C = 'NouvelleDateNaissanceClient'"
        "WHERE S_C = " + getN_C() + ""
        "AND N_C = " + getS_C() + ""
        "AND BD_C = " + getBD_C() + "";
}

void NS_Comp_Map_Cus::CLMapCustomers::setID_C(System::String^ ID_C)
{
    this->ID_C = ID_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setN_C(System::String^ N_C)
{
    this->N_C = N_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setS_C(System::String^ S_C)
{
    this->S_C = S_C;
}

void NS_Comp_Map_Cus::CLMapCustomers::setBD_C(System::String^ BD_C)
{
    this->BD_C = BD_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getID_C(void)
{
    return this->ID_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getN_C(void)
{
    return this->N_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getS_C(void)
{
    return this->S_C;
}

System::String^ NS_Comp_Map_Cus::CLMapCustomers::getBD_C(void)
{
    return this->BD_C;
}
