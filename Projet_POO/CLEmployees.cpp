#include "CLEmployees.h"

// Constructeur par défaut de la classe CLEmployees
NS_Comp_Employees::CLEmployees::CLEmployees(void)
{
	// Initialisation des membres de la classe
	this->oCAD = gcnew NS_Comp_Data::CLCAD();
	this->oMappEmployees = gcnew NS_Comp_Map_Employees::CLMapEmployees();
}

// Méthode pour charger toutes les lignes de la table Employees dans un DataSet
System::Data::DataSet^ NS_Comp_Employees::CLEmployees::loadEmployees(System::String^ dataTableName)
{
	System::String^ sql;
	// Récupération de la requête SQL pour sélectionner tous les employés
	sql = this->oMappEmployees->SelectAll();
	// Exécution de la requête SQL et récupération des résultats dans un DataSet
	return this->oCAD->getRows(sql, dataTableName);
}

// Méthode pour sélectionner un employé en fonction de son nom
System::Data::DataSet^ NS_Comp_Employees::CLEmployees::selectEmployee(System::String^ S_E, System::String^ dataTableName)
{
	System::String^ sql;
	// Configuration du nom de l'employé dans l'objet de mappage
	this->oMappEmployees->setS_E(S_E);
	// Récupération de la requête SQL pour sélectionner un employé spécifique
	sql = this->oMappEmployees->Select();
	// Exécution de la requête SQL et récupération des résultats dans un DataSet
	return this->oCAD->getRows(sql, dataTableName);
}

// Méthode pour insérer un nouvel employé dans la base de données
void NS_Comp_Employees::CLEmployees::insertEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E, System::String^ N1_E, System::String^ ST_E, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	// Configuration des propriétés de l'employé dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	this->oMappEmployees->setN1_E(N1_E);
	this->oMappEmployees->setST_E(ST_E);
	this->oMappEmployees->setSNB(SNB);
	this->oMappEmployees->setSN(SN);
	this->oMappEmployees->setN_V(N_V);
	this->oMappEmployees->setPC(PC);
	// Récupération de la requête SQL pour insérer un nouvel employé
	sql = this->oMappEmployees->Insert();
	// Exécution de la requête SQL
	this->oCAD->actionRows(sql);
}

// Méthode pour mettre à jour les informations d'un employé dans la base de données
void NS_Comp_Employees::CLEmployees::updateEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
	System::String^ sql;
	// Configuration des propriétés de l'employé dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	this->oMappEmployees->setSNB(SNB);
	this->oMappEmployees->setSN(SN);
	this->oMappEmployees->setN_V(N_V);
	this->oMappEmployees->setPC(PC);
	// Récupération de la requête SQL pour mettre à jour les informations d'un employé
	sql = this->oMappEmployees->Update();
	// Exécution de la requête SQL
	this->oCAD->actionRows(sql);
}

// Méthode pour supprimer un employé de la base de données
void NS_Comp_Employees::CLEmployees::deleteEmployee(System::String^ N_E, System::String^ S_E, System::String^ HD_E)
{
	System::String^ sql;
	// Configuration des propriétés de l'employé dans l'objet de mappage
	this->oMappEmployees->setN_E(N_E);
	this->oMappEmployees->setS_E(S_E);
	this->oMappEmployees->setHD_E(HD_E);
	// Récupération de la requête SQL pour supprimer un employé
	sql = this->oMappEmployees->Delete();
	// Exécution de la requête SQL
	this->oCAD->actionRows(sql);
}
