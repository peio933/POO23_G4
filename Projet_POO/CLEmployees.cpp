#include "CLEmployees.h"

// Constructeur par d�faut de la classe CLEmployees
NS_Comp_Employees::CLEmployees::CLEmployees(void)
{
	// Initialisation des membres de la classe
	this->oCAD = gcnew NS_Comp_Data::CLCAD();
	this->oMappEmployees = gcnew NS_Comp_Map_Employees::CLMapEmployees();
}

// M�thode pour charger toutes les lignes de la table Employees dans un DataSet
System::Data::DataSet^ NS_Comp_Employees::CLEmployees::loadEmployees(System::String^ dataTableName)
{
	System::String^ sql;
	// R�cup�ration de la requ�te SQL pour s�lectionner tous les employ�s
	sql = this->oMappEmployees->SelectAll();
	// Ex�cution de la requ�te SQL et r�cup�ration des r�sultats dans un DataSet
	return this->oCAD->getRows(sql, dataTableName);
}

// M�thode pour s�lectionner un employ� en fonction de son nom
System::Data::DataSet^ NS_Comp_Employees::CLEmployees::selectEmployee(System::String^ S_E, System::String^ dataTableName)
{
	System::String^ sql;
	// Configuration du nom de l'employ� dans l'objet de mappage
	this->oMappEmployees->setS_E(S_E);
	// R�cup�ration de la requ�te SQL pour s�lectionner un employ� sp�cifique
	sql = this->oMappEmployees->Select();
	// Ex�cution de la requ�te SQL et r�cup�ration des r�sultats dans un DataSet
	return this->oCAD->getRows(sql, dataTableName);
}

// M�thode pour ins�rer un nouvel employ� dans la base de donn�es
void NS_Comp_Employees::CLEmployees::insertEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E, System::String^ N1_E, System::String^ ST_E, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	// Configuration des propri�t�s de l'employ� dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	this->oMappEmployees->setN1_E(N1_E);
	this->oMappEmployees->setST_E(ST_E);
	this->oMappEmployees->setSNB(SNB);
	this->oMappEmployees->setSN(SN);
	this->oMappEmployees->setN_V(N_V);
	this->oMappEmployees->setPC(PC);
	// R�cup�ration de la requ�te SQL pour ins�rer un nouvel employ�
	sql = this->oMappEmployees->Insert();
	// Ex�cution de la requ�te SQL
	this->oCAD->actionRows(sql);
}

// M�thode pour mettre � jour les informations d'un employ� dans la base de donn�es
void NS_Comp_Employees::CLEmployees::updateEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	// Configuration des propri�t�s de l'employ� dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	this->oMappEmployees->setSNB(SNB);
	this->oMappEmployees->setSN(SN);
	this->oMappEmployees->setN_V(N_V);
	this->oMappEmployees->setPC(PC);
	// R�cup�ration de la requ�te SQL pour mettre � jour les informations d'un employ�
	sql = this->oMappEmployees->Update();
	// Ex�cution de la requ�te SQL
	this->oCAD->actionRows(sql);
}

// M�thode pour supprimer un employ� de la base de donn�es
void NS_Comp_Employees::CLEmployees::deleteEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E)
{
	System::String^ sql;
	// Configuration des propri�t�s de l'employ� dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	// R�cup�ration de la requ�te SQL pour supprimer un employ�
	sql = this->oMappEmployees->Delete();
	// Ex�cution de la requ�te SQL
	this->oCAD->actionRows(sql);
}
