#include "CLStock.h"

// Constructeur de la classe CLStock
NS_Comp_Stock::CLStock::CLStock(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapStock = gcnew NS_Comp_Map_Stock::CLMapStock();
}

// Chargement de tous les articles depuis la base de données
System::Data::DataSet^ NS_Comp_Stock::CLStock::loadArticles(System::String^ dataTableName)
{
    // Construction de la requête SQL pour récupérer tous les articles
    System::String^ sql;
    sql = this->oMapStock->SelectAll();

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(sql, dataTableName);
}

// Sélection d'un article spécifique en fonction de la référence
System::Data::DataSet^ NS_Comp_Stock::CLStock::selectArticle(System::String^ R_A, System::String^ dataTableName)
{
    // Configuration de la référence dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);

    // Construction de la requête SQL pour la sélection de l'article
    System::String^ sql;
    sql = this->oMapStock->Select();

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(sql, dataTableName);
}

// Insertion d'un nouvel article dans la base de données
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

    // Exécution de l'action d'insertion dans la base de données
    this->oCAD->actionRows(this->oMapStock->Insert());
}

// Mise à jour des informations d'un article dans la base de données
void NS_Comp_Stock::CLStock::updateArticle(System::String^ R_A, System::String^ QS_A, System::String^ RT_A, System::String^ HT_A, System::String^ TVA_A, System::String^ D_A)
{
    // Configuration des attributs modifiés de l'article dans l'objet oMapStock
    this->oMapStock->setQS_A(QS_A);
    this->oMapStock->setHT_A(HT_A);
    this->oMapStock->setRT_A(RT_A);
    this->oMapStock->setTVA_A(TVA_A);
    this->oMapStock->setD_A(D_A);

    // Configuration de la référence dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);

    // Exécution de l'action de mise à jour dans la base de données
    this->oCAD->actionRows(this->oMapStock->Update());
}

// Suppression d'un article de la base de données
System::Data::DataSet^ NS_Comp_Stock::CLStock::deleteArticle(System::String^ R_A, System::String^ N_A, System::String^ dataTableName)
{
    // Configuration des attributs de l'article à supprimer dans l'objet oMapStock
    this->oMapStock->setR_A(R_A);
    this->oMapStock->setN_A(N_A);

    // Exécution de l'action de suppression dans la base de données
    return this->oCAD->getRows(this->oMapStock->Delete(), dataTableName);
}
