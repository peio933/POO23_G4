#include "CLStock.h"

// Constructeur de la classe CLStock
NS_Comp_Stock::CLStock::CLStock(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapStock = gcnew NS_Comp_Map_Stock::CLMapStock();
}

// Chargement de tous les articles depuis la base de donn�es
System::Data::DataSet^ NS_Comp_Stock::CLStock::loadArticles(System::String^ dataTableName)
{
    // Construction de la requ�te SQL pour r�cup�rer tous les articles
    System::String^ sql;
    sql = this->oMapStock->SelectAll();

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(sql, dataTableName);
}

// S�lection d'un article sp�cifique en fonction de la r�f�rence
System::Data::DataSet^ NS_Comp_Stock::CLStock::selectArticle(System::String^ R_A, System::String^ dataTableName)
{
    // Configuration de la r�f�rence dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);

    // Construction de la requ�te SQL pour la s�lection de l'article
    System::String^ sql;
    sql = this->oMapStock->Select();

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(sql, dataTableName);
}

// Insertion d'un nouvel article dans la base de donn�es
void NS_Comp_Stock::CLStock::insertArticle(System::String^ R_A, System::String^ N_A, System::String^ QS_A, System::String^ RT_A, System::String^ HT_A, System::String^ TVA_A, System::String^ D_A)
{
    // Configuration des attributs de l'article dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);
    this->oMapStock->setN_A(N_A);
    this->oMapStock->setQS_A(QS_A);
    this->oMapStock->setRT_A(RT_A);
    this->oMapStock->setHT_A(HT_A);
    this->oMapStock->setTVA_A(TVA_A);
    this->oMapStock->setD_A(D_A);

    // Ex�cution de l'action d'insertion dans la base de donn�es
    this->oCAD->actionRows(this->oMapStock->Insert());
}

// Mise � jour des informations d'un article dans la base de donn�es
void NS_Comp_Stock::CLStock::updateArticle(System::String^ R_A, System::String^ QS_A, System::String^ RT_A, System::String^ HT_A, System::String^ TVA_A, System::String^ D_A)
{
    // Configuration des attributs modifi�s de l'article dans l'objet oMapStock
    this->oMapStock->setQS_A(QS_A);
    this->oMapStock->setHT_A(HT_A);
    this->oMapStock->setRT_A(RT_A);
    this->oMapStock->setTVA_A(TVA_A);
    this->oMapStock->setD_A(D_A);

    // Configuration de la r�f�rence dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);

    // Ex�cution de l'action de mise � jour dans la base de donn�es
    this->oCAD->actionRows(this->oMapStock->Update());
}

// Suppression d'un article de la base de donn�es
System::Data::DataSet^ NS_Comp_Stock::CLStock::deleteArticle(System::String^ R_A, System::String^ N_A, System::String^ dataTableName)
{
    // Configuration des attributs de l'article � supprimer dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);
    this->oMapStock->setN_A(N_A);

    // Ex�cution de l'action de suppression dans la base de donn�es
    return this->oCAD->getRows(this->oMapStock->Delete(), dataTableName);
}
