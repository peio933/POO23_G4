#include "CLMapEmployees.h"

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Select(void)
{
    return "SELECT * FROM Prosit_6;";
}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Insert(void)
{
    return "INSERT INTO Prosit_6 (ID_E, N_E, S_E, HD_E, N1_E, ST_E) VALUES('" + this->ID_E + "','" + this->N_E + "','" + this->S_E + "','" + this->HD_E + "','" + this->N1_E + "','" + this->ST_E + "');";

}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Delete(void)
{
    return "DELETE FROM Prosit_6 WHERE id = " + this->ID_E + ";";

}

System::String^ NS_Comp_Map_Employees::CLMapEmployees::Update(void)
{
    return "UPDATE Prosit_6 SET ID_E = '" + this->ID_E + "', N_E = '" + this->N_E + "', S_E = '" + this->S_E + "', HD_E = '" + this->HD_E + "', N1_E = '" + this->N1_E + "', ST_E = '" + this->ST_E + "' WHERE id = " + this->ID_E + ";";

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
