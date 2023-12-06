#include "CLEmployees.h"

NS_Comp_Employees::CLEmployees::CLEmployees(void)
{
	this->oCAD = gcnew NS_Comp_Data::CLCAD();
	this->oMappEmployees = gcnew NS_Comp_Map_Employees::CLMapEmployees();
}

System::Data::DataSet^ NS_Comp_Employees::CLEmployees::loadEmployees(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappEmployees->SelectAll();
	return this->oCAD->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Employees::CLEmployees::selectEmployee(System::String^ N_E, System::String^ dataTableName)
{
	System::String^ sql;
	this->oMappEmployees->setN_E(N_E);
	sql = this->oMappEmployees->Select();
	return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Employees::CLEmployees::insertEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E, System::String^ N1_E, System::String^ ST_E, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	this->oMappEmployees->setN1_E(N1_E);
	this->oMappEmployees->setST_E(ST_E);
	this->oMappEmployees->oAdress->setSNB(SNB);
	this->oMappEmployees->oAdress->setSN(SN);
	this->oMappEmployees->oAdress->setN_V(N_V);
	this->oMappEmployees->oAdress->setPC(PC);
	sql = this->oMappEmployees->Insert();
	this->oCAD->actionRows(sql);
}

void NS_Comp_Employees::CLEmployees::updateEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E)
{
	System::String^ sql;
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	sql = this->oMappEmployees->Update();
	this->oCAD->actionRows(sql);
}

void NS_Comp_Employees::CLEmployees::deleteEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E)
{
	System::String^ sql;

	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	sql = this->oMappEmployees->Delete();
	this->oCAD->actionRows(sql);
}
