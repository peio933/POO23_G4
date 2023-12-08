#include "CLCustomers.h"

NS_Comp_Cus::CLCustomers::CLCustomers(void)
{
	this->oCAD = gcnew NS_Comp_Data::CLCAD();
	this->oMapCustomers = gcnew NS_Comp_Map_Cus::CLMapCustomers();
}

System::Data::DataSet^ NS_Comp_Cus::CLCustomers::loadCustomer(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMapCustomers->SelectAll();
	return this->oCAD->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Cus::CLCustomers::selectCustomer(System::String^ S_C, System::String^ dataTableName)
{
	System::String^ sql;
	this->oMapCustomers->setS_C(S_C);
	sql = this->oMapCustomers->Select();
	return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Cus::CLCustomers::recordCustomer(System::String^ N_C, System::String^ S_C, System::String^ BD_C, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setBD_C(BD_C);
	this->oMapCustomers->setSNB(SNB);
	this->oMapCustomers->setSN(SN);
	this->oMapCustomers->setN_V(N_V);
	this->oMapCustomers->setPC(PC);
	sql = this->oMapCustomers->Insert();
	this->oCAD->actionRows(sql);
}

void NS_Comp_Cus::CLCustomers::modifyCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C)
{
	System::String^ sql;
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setBD_C(BD_C);
	sql = this->oMapCustomers->Update();
	this->oCAD->actionRows(sql);
}

void NS_Comp_Cus::CLCustomers::deleteCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C)
{
	System::String^ sql;
	this->oMapCustomers->setS_C(S_C);
	this->oMapCustomers->setN_C(N_C);
	this->oMapCustomers->setBD_C(BD_C);
	sql = this->oMapCustomers->Delete();
	this->oCAD->actionRows(sql);
}
