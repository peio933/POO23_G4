#include "CLMapEmployees.h"

System::String^ NS_Comp_Map_Employees::CLMapEmployees::SelectAll(void)
{
    return "SELECT Employee.N_E AS Prénom, " 
            "Employee.S_E AS Nom, "
            "Employee.HD_E AS [Date dEmbauche], " 
            "Employee.N1_E AS Responsable, " 
            "Employee.ST_E AS Statut, " 
            "Adress.SNB AS [Numéro de rue], " 
            "Adress.SN AS [Nom de rue], " 
            "Adress.N_V AS Ville, " 
            "Adress.PC AS [Code postal] "
            "FROM Employee "
            "INNER JOIN Adress ON Employee.ID_E = Adress.ID_E ";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Select(void)
{
    return  "SELECT Employee.N_E AS Prénom, " 
            "Employee.S_E AS Nom, "
            "Employee.HD_E AS [Date dEmbauche], " 
            "Employee.N1_E AS Responsable, " 
            "Employee.ST_E AS Statut, " 
            "Adress.SNB AS [Numéro de rue], " 
            "Adress.SN AS [Nom de rue], " 
            "Adress.N_V AS Ville, " 
            "Adress.PC AS [Code postal] "
            "FROM Employee "
            "INNER JOIN Adress ON Employee.ID_E = Adress.ID_E "
            "WHERE Employee.N_E = '" + getN_E() + "' ";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Insert(void)
{
    return  "INSERT INTO Employee (N_E, S_E, HD_E, N1_E, ST_E)"
            "VALUES('" + getN_E() + "', '" + getS_E() + "', '" + getHD_E() + "', '" + getN1_E() + "', '" + getST_E() + "');"
            "DECLARE '" + getID_E() + "' INT;"
            "SET '" + getID_E() + "' = SCOPE_IDENTITY();"
            "INSERT INTO Adress(SNB, SN, N_V, PC, ID_E)"
            "VALUES('" + this->oAdress->getSNB() + "', '" + this->oAdress->getSN() + "', '" + this->oAdress->getN_V() + "', '" + this->oAdress->getPC() + "', '" + getID_E() + "'); ";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Delete(void)
{
    return  "DELETE FROM Employee" 
            "WHERE S_E = '" + getS_E() + "' AND N_E = '" + getN_E() + "' AND HD_E = '" + getHD_E() + "'; ";

}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Update(void)
{
    return  "UPDATE Employee"
            "SET N_E = 'NouveauPrénom', S_E = 'NouveauNom', HD_E = 'NouvelleDateEmbauche'"
            "WHERE S_E = '" + getS_E() + "' AND N_E = '" + getN_E() + "' AND HD_E = '" + getHD_E() + "';";

}

void NS_Comp_Map_Employees::CLMapEmployees::setID_E(System::String^ ID_E)
{
    this->ID_E = ID_E;

}

void NS_Comp_Map_Employees::CLMapEmployees::setN_E(System::String^ N_E)
{
    this->N_E = N_E;
}


void NS_Comp_Map_Employees::CLMapEmployees::setS_E(System::String^ S_E)
{
    this->S_E = S_E;
}


void NS_Comp_Map_Employees::CLMapEmployees::setHD_E(System::String^ HD_E)
{
    this->HD_E = HD_E;
}


void NS_Comp_Map_Employees::CLMapEmployees::setN1_E(System::String^ N1_E)
{
    this->N1_E = N1_E;
}


void NS_Comp_Map_Employees::CLMapEmployees::setST_E(System::String^ ST_E)
{
    this->ST_E = ST_E;
}


System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_E(void) { return this->ID_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getN_E(void) { return this->N_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getS_E(void) { return this->S_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getHD_E(void) { return this->HD_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getN1_E(void) { return this->N1_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getST_E(void) { return this->ST_E; }
