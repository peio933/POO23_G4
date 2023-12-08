#include "CLCustomers.h"

NS_Comp_Cus::CLCustomers::CLCustomers(void)
{
	this->oCAD = gcnew NS_Comp_Data::CLCAD(); 
	this->oMapCustomers = gcnew NS_Comp_Map_Cus::CLMapCustomers();
}

System::Data::DataSet^ NS_Comp_Cus::CLCustomers::selectCustomer(System::String^ N_C, System::String^ dataTableName)
{
	this->oMapCustomers->setN_C(N_C);
	return this->oCAD->getRows(this->oMapCustomers->Select(), dataTableName);
}

void NS_Comp_Cus::CLCustomers::insertCustomer(System::String^ N_C, System::String^ S_C, System::String^ BD_C, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC, System::String^ ID_C)
{
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setBD_C(BD_C);
	this->oMapCustomers->oAdress->setSNB(SNB);
	this->oMapCustomers->oAdress->setSN(SN);
	this->oMapCustomers->oAdress->setN_V(N_V);
	this->oMapCustomers->oAdress->setPC(PC);
	this->oMapCustomers->setID_C(ID_C);
	this->oCAD->actionRows(this->oMapCustomers->Insert());
}

void NS_Comp_Cus::CLCustomers::updateCustomer(System::String^ N_C, System::String^ S_C, System::String^ BD_C)
{
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setBD_C(BD_C);
	this->oCAD->actionRows(this->oMapCustomers->Update());
}

void NS_Comp_Cus::CLCustomers::deleteCustomer(System::String^ N_C, System::String^ S_C, System::String^ BD_C)
{
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setBD_C(BD_C);
	this->oCAD->actionRows(this->oMapCustomers->Delete());
}

