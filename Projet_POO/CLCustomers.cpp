#include "CLCustomers.h"

// Constructeur de la classe CLCustomers
NS_Comp_Cus::CLCustomers::CLCustomers(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapCustomers = gcnew NS_Comp_Map_Cus::CLMapCustomers();
}

// Méthode pour charger les données des clients depuis la base de données
System::Data::DataSet^ NS_Comp_Cus::CLCustomers::loadCustomer(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMapCustomers->SelectAll();
    return this->oCAD->getRows(sql, dataTableName);
}

// Méthode pour sélectionner un client en fonction de son numéro de sécurité sociale
System::Data::DataSet^ NS_Comp_Cus::CLCustomers::selectCustomer(System::String^ S_C, System::String^ dataTableName)
{
    System::String^ sql;
    this->oMapCustomers->setS_C(S_C);
    sql = this->oMapCustomers->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

// Méthode pour enregistrer un nouveau client dans la base de données
void NS_Comp_Cus::CLCustomers::recordCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
    System::String^ sql;
    // Configuration des paramètres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    this->oMapCustomers->setSNB(SNB);
    this->oMapCustomers->setSN(SN);
    this->oMapCustomers->setN_V(N_V);
    this->oMapCustomers->setPC(PC);
    // Construction de la requête d'insertion
    sql = this->oMapCustomers->Insert();
    // Exécution de la requête d'insertion
    this->oCAD->actionRows(sql);
}

// Méthode pour modifier les informations d'un client dans la base de données
void NS_Comp_Cus::CLCustomers::modifyCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C, System::String^ Nw_C, System::String^ BDw_C)
{
    System::String^ sql;
    // Configuration des paramètres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    this->oMapCustomers->setNw_C(Nw_C);
    this->oMapCustomers->setBDw_C(BDw_C);
    // Construction de la requête de mise à jour
    sql = this->oMapCustomers->Update();
    // Exécution de la requête de mise à jour
    this->oCAD->actionRows(sql);
}

// Méthode pour supprimer un client de la base de données
void NS_Comp_Cus::CLCustomers::deleteCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C)
{
    System::String^ sql;
    // Configuration des paramètres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    // Construction de la requête de suppression
    sql = this->oMapCustomers->Delete();
    // Exécution de la requête de suppression
    this->oCAD->actionRows(sql);
}
