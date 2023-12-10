#include "CLOrders.h"

// Constructeur de la classe CLOrders
NS_Comp_Orders::CLOrders::CLOrders(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapOrders = gcnew NS_Comp_Map_Orders::CLMapOrders();
}

// Chargement de toutes les commandes depuis la base de donn�es
System::Data::DataSet^ NS_Comp_Orders::CLOrders::loadOrders(System::String^ dataTableName)
{
    // Construction de la requ�te SQL pour r�cup�rer toutes les commandes
    System::String^ sql;
    sql = this->oMapOrders->SelectAll();

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(sql, dataTableName);
}

// S�lection des articles d'une commande sp�cifique
System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectArticles(System::String^ R_O, System::String^ dataTableName)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Construction de la requ�te SQL pour la s�lection des articles de la commande
    System::String^ sql;
    sql = this->oMapOrders->Select();

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(sql, dataTableName);
}

// S�lection du nom du client pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectName(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (nom du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectName());
}

// S�lection du pr�nom du client pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectSurname(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (pr�nom du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectSurname());
}

// S�lection de l'adresse du client pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectAdress(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (adresse du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectAdress());
}

// S�lection de la ville du client pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectCity(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (ville du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectCity());
}

// S�lection du montant HT pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectHT(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (montant HT)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectHT()).ToString();
}

// S�lection du montant TVA pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectTVA(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (montant TVA)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTVA()).ToString();
}

// S�lection du montant TTC pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::selectTTC(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (montant TTC)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTTC()).ToString();
}

// Calcul du montant de la remise pour une commande sp�cifique
System::String^ NS_Comp_Orders::CLOrders::discount(System::String^ R_O)
{
    // Configuration de la r�f�rence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Ex�cution de la requ�te SQL et retour du r�sultat (montant de la remise)
    return this->oCAD->executeQuery(this->oMapOrders->Discount());
}

// Ajout d'un article � une commande
System::Data::DataSet^ NS_Comp_Orders::CLOrders::addArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    // Configuration des r�f�rences de commande, d'article et de la quantit� dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapOrders->AddArticle(), dataTableName);
}

// Suppression d'un article d'une commande
System::Data::DataSet^ NS_Comp_Orders::CLOrders::deleteArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    // Configuration des r�f�rences de commande, d'article et de la quantit� dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapOrders->DeleteArticle(), dataTableName);
}

// Insertion d'une nouvelle commande
void NS_Comp_Orders::CLOrders::insertOrders(System::String^ N_C, System::String^ S_C, System::String^ MOP_O)
{
    // Construction de la requ�te SQL pour l'insertion d'une nouvelle commande
    System::String^ sql;
    this->oMapOrders->setS_C(S_C);
    this->oMapOrders->setN_C(N_C);
    this->oMapOrders->setMOP_O(MOP_O);
    sql = this->oMapOrders->Insert();

    // Ex�cution de l'action d'insertion dans la base de donn�es
    this->oCAD->actionRows(sql);
}

// Mise � jour des informations d'une commande
void NS_Comp_Orders::CLOrders::updateOrders(System::String^ R_O, System::String^ SD_O, System::String^ DD_O)
{
    // Construction de la requ�te SQL pour la mise � jour des informations de la commande
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setDD_O(DD_O);
    this->oMapOrders->setSD_O(SD_O);
    sql = this->oMapOrders->Update();

    // Ex�cution de l'action de mise � jour dans la base de donn�es
    this->oCAD->actionRows(sql);
}

// Suppression d'une commande
void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ R_O)
{
    // Construction de la requ�te SQL pour la suppression d'une commande
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    sql = this->oMapOrders->Delete();

    // Ex�cution de l'action de suppression dans la base de donn�es
    this->oCAD->actionRows(sql);
}
