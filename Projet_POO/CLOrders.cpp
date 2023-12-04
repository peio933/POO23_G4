#include "CLOrders.h"

NS_Comp_Orders::CLOrders::CLOrders(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    //this->oMappOrders = gcnew NS_Comp_Map_Orders::CLmapOrders();
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectOrders(System::String^ dataTableName)
{
    System::String^ sql;

    // sql = this->oMappEmployees->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Orders::CLOrders::insertOrders(System::String^, System::String^, System::String^, System::String^, System::String^)
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

void NS_Comp_Orders::CLOrders::updateOrders(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^)
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

void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ Id)
{
    System::String^ sql;

    /*this->oMappEmployees->setId(Id);
    sql = this->oMappEmployees->Delete();*/

    this->oCAD->actionRows(sql);
}

