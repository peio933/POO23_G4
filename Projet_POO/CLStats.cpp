#include "CLStats.h"

NS_Comp_Stats::CLStats::CLStats(void)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Stats::CLStats::averageCart(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->AverageTTC_O(), dataTableName);
}

void NS_Comp_Stats::CLStats::monthSalesRevenue(System::String^ dataTableName, System::String^ Month, System::String^ Year)
{
    this->oMapStats->setMonthSalesRevenue();
    this->oMapStats->setYearSalesRevenue();
    this->oCAD->getRows(this->oMapStats->SumTTC_O(), dataTableName);

}

void NS_Comp_Stats::CLStats::belowThreshold(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->SelectbelowThreshold(), dataTableName);
}

void NS_Comp_Stats::CLStats::bestSellers(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->SelectBestSellers(), dataTableName);
}

void NS_Comp_Stats::CLStats::lessSold(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->SelectLessSold(), dataTableName);
}

void NS_Comp_Stats::CLStats::stockCommercialValue(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->QueryStockCommercialValue(), dataTableName);
}

void NS_Comp_Stats::CLStats::stockPurchaseValue(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->QueryStockPurchaseValue(), dataTableName);
}

void NS_Comp_Stats::CLStats::customerTotalAmount(System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->SumTTC_O_C(), dataTableName);
}

void NS_Comp_Stats::CLStats::simulateStockValue(System::String^, System::String^, System::String^ dataTableName)
{
    this->oCAD->getRows(this->oMapStats->simulateStockValue(), dataTableName);
}
