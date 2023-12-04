#include "CLEmployees.h"

NS_Comp_Employees::CLEmployees::CLEmployees(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    //this->oMappEmployees = gcnew NS_Comp_Mappage::CLmapEmployees();
}

System::Data::DataSet^ NS_Comp_Employees::CLEmployees::selectEmployee(System::String^ dataTableName)
{
    System::String^ sql;

   // sql = this->oMappEmployees->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Employees::CLEmployees::insertEmployee(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^codepostal)
{
	System::String^ sql;

	/*this->oMappEmployees->setNom(nom);
	this->oMappEmployees->setPrenom(prenom);
	this->oMappEmployees->setAdresse(adresse);
	this->oMappEmployees->setVille(ville);
	this->oMappEmployees->setCodePostal(codepostal);
	sql = this->oMappEmployees->Insert();

	this->oCAD->actionRows(sql);*/
}

void NS_Comp_Employees::CLEmployees::updateEmployee(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ codepostal, System::String^ Id)
{
	System::String^ sql;

	/*this->oMappEmployees->setNom(nom);
	this->oMappEmployees->setPrenom(prenom);
	this->oMappEmployees->setAdresse(adresse);
	this->oMappEmployees->setVille(ville);
	this->oMappEmployees->setCodePostal(codepostal);
	this->oMappEmployees->setId(Id);
	sql = this->oMappEmployees->Update();

	this->oCAD->actionRows(sql);*/
}

void NS_Comp_Employees::CLEmployees::deleteEmployee(System::String^ Id)
{
	System::String^ sql;

	/*this->oMappEmployees->setId(Id);
	sql = this->oMappEmployees->Delete();*/

	this->oCAD->actionRows(sql);
}
