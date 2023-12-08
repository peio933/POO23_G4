#include "CLStats.h"

NS_Comp_Stats::CLStats::CLStats(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapStats = gcnew NS_Comp_Map_Stats::CLMapStats();
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::averageCart(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->AverageTTC_O(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::monthSalesRevenue(System::String^ dataTableName, System::String^ Month, System::String^ Year)
{
    this->oMapStats->setMonthSalesRevenue(Month);
    this->oMapStats->setYearSalesRevenue(Year);
    return this->oCAD->getRows(this->oMapStats->SumTTC_O(), dataTableName);

}

System::Data::DataSet^ NS_Comp_Stats::CLStats::belowThreshold(System::String^ dataTableName)
{
   return this->oCAD->getRows(this->oMapStats->SelectbelowThreshold(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::bestSellers(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->SelectBestSellers(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::lessSold(System::String^ dataTableName)
{
   return this->oCAD->getRows(this->oMapStats->SelectLessSold(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::stockCommercialValue(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->QueryStockCommercialValue(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::stockPurchaseValue(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->QueryStockPurchaseValue(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::customerTotalAmount(System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->SumTTC_O_C(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Stats::CLStats::simulateStockValue(System::String^, System::String^, System::String^, System::String^, System::String^ dataTableName)
{
    return this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}
