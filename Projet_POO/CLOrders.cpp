#include "CLOrders.h"

// Constructeur de la classe CLOrders
NS_Comp_Orders::CLOrders::CLOrders(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapOrders = gcnew NS_Comp_Map_Orders::CLMapOrders();
}

// Chargement de toutes les commandes depuis la base de données
System::Data::DataSet^ NS_Comp_Orders::CLOrders::loadOrders(System::String^ dataTableName)
{
    // Construction de la requête SQL pour récupérer toutes les commandes
    System::String^ sql;
    sql = this->oMapOrders->SelectAll();

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(sql, dataTableName);
}

// Sélection des articles d'une commande spécifique
System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectArticles(System::String^ R_O, System::String^ dataTableName)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Construction de la requête SQL pour la sélection des articles de la commande
    System::String^ sql;
    sql = this->oMapOrders->Select();

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(sql, dataTableName);
}

// Sélection du nom du client pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectName(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (nom du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectName());
}

// Sélection du prénom du client pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectSurname(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (prénom du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectSurname());
}

// Sélection de l'adresse du client pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectAdress(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (adresse du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectAdress());
}

// Sélection de la ville du client pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectCity(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (ville du client)
    return this->oCAD->executeQuery(this->oMapOrders->SelectCity());
}

// Sélection du montant HT pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectHT(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (montant HT)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectHT()).ToString();
}

// Sélection du montant TVA pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectTVA(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (montant TVA)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTVA()).ToString();
}

// Sélection du montant TTC pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::selectTTC(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (montant TTC)
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTTC()).ToString();
}

// Calcul du montant de la remise pour une commande spécifique
System::String^ NS_Comp_Orders::CLOrders::discount(System::String^ R_O)
{
    // Configuration de la référence de commande dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);

    // Exécution de la requête SQL et retour du résultat (montant de la remise)
    return this->oCAD->executeQuery(this->oMapOrders->Discount());
}

// Ajout d'un article à une commande
System::Data::DataSet^ NS_Comp_Orders::CLOrders::addArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    // Configuration des références de commande, d'article et de la quantité dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapOrders->AddArticle(), dataTableName);
}

// Suppression d'un article d'une commande
System::Data::DataSet^ NS_Comp_Orders::CLOrders::deleteArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    // Configuration des références de commande, d'article et de la quantité dans l'objet oMapOrders
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapOrders->DeleteArticle(), dataTableName);
}

// Insertion d'une nouvelle commande
void NS_Comp_Orders::CLOrders::insertOrders(System::String^ N_C, System::String^ S_C, System::String^ MOP_O)
{
    // Construction de la requête SQL pour l'insertion d'une nouvelle commande
    System::String^ sql;
    this->oMapOrders->setS_C(S_C);
    this->oMapOrders->setN_C(N_C);
    this->oMapOrders->setMOP_O(MOP_O);
    sql = this->oMapOrders->Insert();

    // Exécution de l'action d'insertion dans la base de données
    this->oCAD->actionRows(sql);
}

// Mise à jour des informations d'une commande
void NS_Comp_Orders::CLOrders::updateOrders(System::String^ R_O, System::String^ SD_O, System::String^ DD_O)
{
    // Construction de la requête SQL pour la mise à jour des informations de la commande
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setDD_O(DD_O);
    this->oMapOrders->setSD_O(SD_O);
    sql = this->oMapOrders->Update();

    // Exécution de l'action de mise à jour dans la base de données
    this->oCAD->actionRows(sql);
}

// Suppression d'une commande
void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ R_O)
{
    // Construction de la requête SQL pour la suppression d'une commande
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    sql = this->oMapOrders->Delete();

    // Exécution de l'action de suppression dans la base de données
    this->oCAD->actionRows(sql);
}
