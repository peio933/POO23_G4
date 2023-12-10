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
    // Configuration du mois et de l'ann�e dans l'objet oMapStats
    this->oMapStats->setMonthSalesRevenue(Month);
    this->oMapStats->setYearSalesRevenue(Year);

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->SumTTC_O(), dataTableName);
}

// S�lection des articles en dessous du seuil de vente
System::Data::DataSet^ NS_Comp_Stats::CLStats::belowThreshold(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->SelectbelowThreshold(), dataTableName);
}

// S�lection des meilleurs vendeurs
System::Data::DataSet^ NS_Comp_Stats::CLStats::bestSellers(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->SelectBestSellers(), dataTableName);
}

// S�lection des articles les moins vendus
System::Data::DataSet^ NS_Comp_Stats::CLStats::lessSold(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->SelectLessSold(), dataTableName);
}

// Calcul de la valeur commerciale du stock
System::Data::DataSet^ NS_Comp_Stats::CLStats::stockCommercialValue(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->QueryStockCommercialValue(), dataTableName);
}

// Calcul de la valeur d'achat du stock
System::Data::DataSet^ NS_Comp_Stats::CLStats::stockPurchaseValue(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->QueryStockPurchaseValue(), dataTableName);
}

// Calcul du montant total des achats par client
System::Data::DataSet^ NS_Comp_Stats::CLStats::customerTotalAmount(System::String^ dataTableName)
{
    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->SumTTC_O_C(), dataTableName);
}

/*
// Simulation de la valeur du stock (comment� pour le moment)
System::Data::DataSet^ NS_Comp_Stats::CLStats::simulateStockValue(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}
*/

// Simulation de la valeur du stock avec des param�tres sp�cifiques
System::Data::DataSet^ NS_Comp_Stats::CLStats::simulateStockValue(System::String^ TVA, System::String^ MargeCommerciale, System::String^ ReductionCommerciale, System::String^ DemarqueInconnue, System::String^ dataTableName)
{
    // Configuration des param�tres dans l'objet oMapStats
    this->oMapStats->setTVA(TVA);
    this->oMapStats->setMargeCommerciale(MargeCommerciale);
    this->oMapStats->setReductionCommerciale(ReductionCommerciale);
    this->oMapStats->setDemarqueInconnue(DemarqueInconnue);

    // Ex�cution de la requ�te SQL et retour des r�sultats
    return this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}

