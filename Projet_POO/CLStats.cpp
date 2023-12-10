#include "CLStats.h"

// Constructeur de la classe CLStats
NS_Comp_Stats::CLStats::CLStats(void)
{
    // Initialisation des membres de la classe
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapStats = gcnew NS_Comp_Map_Stats::CLMapStats();
}

// Calcul de la moyenne du panier
System::Data::DataSet^ NS_Comp_Stats::CLStats::averageCart(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->AverageTTC_O(), dataTableName);
}

// Calcul du chiffre d'affaires mensuel
System::Data::DataSet^ NS_Comp_Stats::CLStats::monthSalesRevenue(System::String^ dataTableName, System::String^ Month, System::String^ Year)
{
    // Configuration du mois et de l'année dans l'objet oMapStats
    this->oMapStats->setMonthSalesRevenue(Month);
    this->oMapStats->setYearSalesRevenue(Year);

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->SumTTC_O(), dataTableName);
}

// Sélection des articles en dessous du seuil de vente
System::Data::DataSet^ NS_Comp_Stats::CLStats::belowThreshold(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->SelectbelowThreshold(), dataTableName);
}

// Sélection des meilleurs vendeurs
System::Data::DataSet^ NS_Comp_Stats::CLStats::bestSellers(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->SelectBestSellers(), dataTableName);
}

// Sélection des articles les moins vendus
System::Data::DataSet^ NS_Comp_Stats::CLStats::lessSold(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->SelectLessSold(), dataTableName);
}

// Calcul de la valeur commerciale du stock
System::Data::DataSet^ NS_Comp_Stats::CLStats::stockCommercialValue(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->QueryStockCommercialValue(), dataTableName);
}

// Calcul de la valeur d'achat du stock
System::Data::DataSet^ NS_Comp_Stats::CLStats::stockPurchaseValue(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->QueryStockPurchaseValue(), dataTableName);
}

// Calcul du montant total des achats par client
System::Data::DataSet^ NS_Comp_Stats::CLStats::customerTotalAmount(System::String^ dataTableName)
{
    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->SumTTC_O_C(), dataTableName);
}

/*
// Simulation de la valeur du stock (commenté pour le moment)
System::Data::DataSet^ NS_Comp_Stats::CLStats::simulateStockValue(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}
*/

// Simulation de la valeur du stock avec des paramètres spécifiques
System::Data::DataSet^ NS_Comp_Stats::CLStats::simulateStockValue(System::String^ TVA, System::String^ MargeCommerciale, System::String^ ReductionCommerciale, System::String^ DemarqueInconnue, System::String^ dataTableName)
{
    // Configuration des paramètres dans l'objet oMapStats
    this->oMapStats->setTVA(TVA);
    this->oMapStats->setMargeCommerciale(MargeCommerciale);
    this->oMapStats->setReductionCommerciale(ReductionCommerciale);
    this->oMapStats->setDemarqueInconnue(DemarqueInconnue);

    // Exécution de la requête SQL et retour des résultats
    return this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}

