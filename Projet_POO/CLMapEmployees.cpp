#include "CLMapEmployees.h"

System::String^ NS_Comp_Map_Employees::CLMapEmployees::SelectAll(void)
{
    return  "SELECT Employee.S_E AS Nom, " 
            "Employee.N_E AS Prénom, "
            "Employee.HD_E AS [Date d'Embauche], " 
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
    return  "SELECT Employee.S_E AS Nom, " 
            "Employee.N_E AS Prénom, "
            "Employee.HD_E AS [Date d'Embauche], " 
            "Employee.N1_E AS Responsable, " 
            "Employee.ST_E AS Statut, " 
            "Adress.SNB AS [Numéro de rue], " 
            "Adress.SN AS [Nom de rue], " 
            "Adress.N_V AS Ville, " 
            "Adress.PC AS [Code postal] "
            "FROM Employee "
            "INNER JOIN Adress ON Employee.ID_E = Adress.ID_E "
            "WHERE Employee.S_E = '" + getS_E() + "' ;";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Insert(void)
{
    return  "INSERT INTO Employee (S_E, N_E, HD_E, N1_E, ST_E)"
            "VALUES('" + getN_E() + "', '" + getS_E() + "', '" + getHD_E() + "', '" + getN1_E() + "', '" + getST_E() + "');"
            "DECLARE  @EmployeeID INT;"
            "SET @EmployeeID = SCOPE_IDENTITY();"
            "INSERT INTO Adress(SNB, SN, N_V, PC, ID_E)"
            "VALUES('" + getSNB() + "', '" + getSN() + "', '" + getN_V() + "', '" + getPC() + "', @EmployeeID); ";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Delete(void)
{
    return  "DELETE FROM Adress "
            "WHERE ID_E = (SELECT ID_E FROM Employee WHERE S_E = '" + getN_E() + "' AND N_E = '" + getS_E() + "' AND HD_E = '" + getHD_E() + "'); "
            "DELETE FROM Employee "
            "WHERE S_E = '" + getS_E() + "' AND N_E = '" + getN_E() + "' AND HD_E = '" + getHD_E() + "';";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Update(void)
{
    return   "UPDATE Adress "
            "SET SNB = '" + getSNB() + "', SN = '" + getSN() + "', N_V = '" + getN_V() + "', PC = '" + getPC() + "' "
            "FROM Employee "
            "WHERE Adress.ID_E = Employee.ID_E "
            "AND Employee.N_E = '" + getS_E() + "' "
            "AND Employee.S_E = '" + getN_E() + "' "
            "AND Employee.HD_E = '" + getHD_E() + "'; ";
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

void NS_Comp_Map_Employees::CLMapEmployees::setID_CY(System::String^ ID_CY)
{
    this->ID_CY = ID_CY;
}

void NS_Comp_Map_Employees::CLMapEmployees::setN_V(System::String^ N_V)
{
    this->N_V = N_V;
}

void NS_Comp_Map_Employees::CLMapEmployees::setID_SN(System::String^ ID_SN)
{
    this->ID_SN = ID_SN;
}

void NS_Comp_Map_Employees::CLMapEmployees::setSN(System::String^ SN)
{
    this->SN = SN;
}

void NS_Comp_Map_Employees::CLMapEmployees::setID_SNB(System::String^ ID_SNB)
{
    this->ID_SNB = ID_SNB;
}

void NS_Comp_Map_Employees::CLMapEmployees::setSNB(System::String^ SNB)
{
    this->SNB = SNB;
}

void NS_Comp_Map_Employees::CLMapEmployees::setID_PC(System::String^ ID_PC)
{
    this->ID_PC = ID_PC;
}

void NS_Comp_Map_Employees::CLMapEmployees::setPC(System::String^ PC)
{
    this->PC = PC;
}


System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_E(void) { return this->ID_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getN_E(void) { return this->N_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getS_E(void) { return this->S_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getHD_E(void) { return this->HD_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getN1_E(void) { return this->N1_E; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getST_E(void) { return this->ST_E; }

//adresse de l'employé
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_CY(void){return this->ID_CY;}
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getN_V(void) { return this->N_V; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_SN(void) { return this->ID_SN; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getSN(void) { return this->SN; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_SNB(void) { return this->ID_SNB; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getSNB(void) { return this->SNB; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getID_PC(void) { return this->ID_PC; }
System::String^ NS_Comp_Map_Employees::CLMapEmployees::getPC(void) { return this->PC; }