#include "CLCustomers.h"

// Constructeur de la classe CLCustomers
NS_Comp_Cus::CLCustomers::CLCustomers(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapCustomers = gcnew NS_Comp_Map_Cus::CLMapCustomers();
}

// M�thode pour charger les donn�es des clients depuis la base de donn�es
System::Data::DataSet^ NS_Comp_Cus::CLCustomers::loadCustomer(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMapCustomers->SelectAll();
    return this->oCAD->getRows(sql, dataTableName);
}

// M�thode pour s�lectionner un client en fonction de son num�ro de s�curit� sociale
System::Data::DataSet^ NS_Comp_Cus::CLCustomers::selectCustomer(System::String^ S_C, System::String^ dataTableName)
{
    System::String^ sql;
    this->oMapCustomers->setS_C(S_C);
    sql = this->oMapCustomers->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

// M�thode pour enregistrer un nouveau client dans la base de donn�es
void NS_Comp_Cus::CLCustomers::recordCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C, System::String^ SNB, System::String^ SN, System::String^ N_V, System::String^ PC)
{
    System::String^ sql;
    // Configuration des param�tres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    this->oMapCustomers->setSNB(SNB);
    this->oMapCustomers->setSN(SN);
    this->oMapCustomers->setN_V(N_V);
    this->oMapCustomers->setPC(PC);
    // Construction de la requ�te d'insertion
    sql = this->oMapCustomers->Insert();
    // Ex�cution de la requ�te d'insertion
    this->oCAD->actionRows(sql);
}

// M�thode pour modifier les informations d'un client dans la base de donn�es
void NS_Comp_Cus::CLCustomers::modifyCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C, System::String^ Nw_C, System::String^ BDw_C)
{
    System::String^ sql;
    // Configuration des param�tres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    this->oMapCustomers->setNw_C(Nw_C);
    this->oMapCustomers->setBDw_C(BDw_C);
    // Construction de la requ�te de mise � jour
    sql = this->oMapCustomers->Update();
    // Ex�cution de la requ�te de mise � jour
    this->oCAD->actionRows(sql);
}

// M�thode pour supprimer un client de la base de donn�es
void NS_Comp_Cus::CLCustomers::deleteCustomer(System::String^ S_C, System::String^ N_C, System::String^ BD_C)
{
    System::String^ sql;
    // Configuration des param�tres du client
    this->oMapCustomers->setS_C(S_C);
    this->oMapCustomers->setN_C(N_C);
    this->oMapCustomers->setBD_C(BD_C);
    // Construction de la requ�te de suppression
    sql = this->oMapCustomers->Delete();
    // Ex�cution de la requ�te de suppression
    this->oCAD->actionRows(sql);
}
