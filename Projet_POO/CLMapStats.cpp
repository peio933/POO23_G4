#include "CLMapStats.h"

System::String^ NS_Comp_Map_Stats::CLMapStats::AverageTTC_O(void)
{
	return "SELECT AVG(TTC_O) "
		"AS PanierMoyen "
		"FROM Customer_Order;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O(void)
{
	return"DECLARE " + getMonthSalesRevenue() + " INT;"
		"SET " + getMonthSalesRevenue() + " = 7; "
		"DECLARE" + getYearSalesRevenue() + "INT; "
		"SET " + getYearSalesRevenue() + " = 2023; "
		"SELECT SUM(TTC_O) AS ChiffreAffairesMensuel"
		"FROM Customer_Order"
		"WHERE MONTH(SD_O) =" + getMonthSalesRevenue() + "AND YEAR(SD_O) =" + getYearSalesRevenue() + "; ";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectBestSellers(void)
{
	return"SELECT TOP 10 R_A, N_A,"
		"SUM(QC_A) AS QuantiteVendue "
		"FROM composed "
		"JOIN Article "
		"ON composed.ID_A = Article.ID_A "
		"GROUP BY R_A, N_A "
		"ORDER BY QuantiteVendue DESC;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectbelowThreshold(void)
{
	return"SELECT ID_A,	R_A AS ReferenceProduit, N_A AS NomProduit, QC_A AS QuantiteEnStock "
		"FROM Article WHERE QC_A < RT_A;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectLessSold(void)
{
	return"SELECT TOP 10 R_A, N_A, SUM(QC_A) "
		"AS QuantiteVendue "
		"FROM composed "
		"JOIN Article ON composed.ID_A = Article.ID_A "
		"GROUP BY R_A, N_A "
		"ORDER BY QuantiteVendue ASC;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockCommercialValue(void)
{
	return"SELECT CAST(SUM(QC_A * HT_A) "
		"AS DECIMAL(18, 2)) "
		"AS ValeurCommercialeStock "
		"FROM Article;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockPurchaseValue(void)
{
	return"SELECT CAST(SUM(QC_A * (HT_A * TVA_A)) "
		"AS DECIMAL(18, 2)) "
		"AS ValeurAchatStock "
		"FROM Article;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O_C(void)
{
	return"SELECT Customers.N_C "
		"AS NomClient, Customers.S_C "
		"AS PrenomClient, SUM(Customer_Order.TTC_O) "
		"AS MontantTotalAchats "
		"FROM Customers "
		"JOIN Customer_Order ON Customers.ID_C = Customer_Order.ID_C "
		"GROUP BY Customers.N_C, "
		"Customers.S_C;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::simulateStockValue(void)
{
	return "SELECT CAST(SUM(QC_A * HT_A) "
		"AS DECIMAL(18, 2)) "
		"AS ValeurCommercialeStock, "
		"FROM Article;";
}

void NS_Comp_Map_Stats::CLMapStats::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}

void NS_Comp_Map_Stats::CLMapStats::setMargeCommerciale(System::String^ MargeCommerciale)
{
	this->MargeCommerciale = MargeCommerciale;
}

void NS_Comp_Map_Stats::CLMapStats::setDemarqueInconnue(System::String^ DemarqueInconnue)
{
	this->DemarqueInconnue = DemarqueInconnue;
}

void NS_Comp_Map_Stats::CLMapStats::setMonthSalesRevenue(System::String^ MonthSalesRevenue)
{
	this->MonthSalesRevenue = MonthSalesRevenue;
}

void NS_Comp_Map_Stats::CLMapStats::setYearSalesRevenue(System::String^ YearSalesRevenue)
{
	this->YearSalesRevenue = YearSalesRevenue;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getTVA(void)
{
	return this->TVA;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getMargeCommerciale(void)
{
	return this->MargeCommerciale;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getDemarqueInconnue(void)
{
	return this->DemarqueInconnue;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getMonthSalesRevenue(void)
{
	return this->MonthSalesRevenue;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getYearSalesRevenue(void)
{
	return this->YearSalesRevenue;
}
