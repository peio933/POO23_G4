#include "CLMapStats.h"

System::String^ NS_Comp_Map_Stats::CLMapStats::AverageTTC_O(void)
{
	return "SELECT AVG(TTC_O) "
		"AS Average_cart  "
		"FROM Customer_Order;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O(void)
{
	/*
	return "DECLARE " + getMonthSalesRevenue() + " INT; "
	"SET " + getMonthSalesRevenue() + " = 7; "
	"DECLARE " + getYearSalesRevenue() + " INT; "  // Ajout d'un espace avant INT
	"SET " + getYearSalesRevenue() + " = 2023; "
	"SELECT SUM(TTC_O) AS ChiffreAffairesMensuel "
	"FROM Customer_Order "
	"WHERE MONTH(SD_O) = " + getMonthSalesRevenue() + " AND YEAR(SD_O) = " + getYearSalesRevenue() + "; ";  // Ajout d'espaces avant AND
	*/

	//Test en statique
	/* return "DECLARE @Month INT = 4; "
		"DECLARE @Year INT = 2023; "
		"SELECT SUM(TTC_O) AS Monthly_turnover "
		"FROM Customer_Order "
		"WHERE MONTH(SD_O) = @Month AND YEAR(SD_O) = @Year;"; */

	//Test en dynamique 
	return "SELECT SUM(TTC_O) AS ChiffreAffairesMensuel "
		"FROM Customer_Order "
		"WHERE MONTH(SD_O) = " + getMonthSalesRevenue() + " AND YEAR(SD_O) = " + getYearSalesRevenue() + " ; ";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectBestSellers(void)
{
	return"SELECT TOP 10 R_A AS Article_reference, N_A AS Article_name, "
		"SUM(QC_A) AS Quantity_sold "
		"FROM composed "
		"JOIN Article "
		"ON composed.ID_A = Article.ID_A "
		"GROUP BY R_A, N_A "
		"ORDER BY Quantity_sold DESC;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectbelowThreshold(void)
{
	return"SELECT R_A AS Product_reference, N_A AS Product_name, QC_A AS Quantity_in_stock "
		"FROM Article WHERE QC_A < RT_A;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SelectLessSold(void)
{
	return"SELECT TOP 10 R_A AS Article_reference, N_A AS Article_name, "
		"SUM(QC_A) AS Quantity_sold "
		"FROM composed "
		"JOIN Article ON composed.ID_A = Article.ID_A "
		"GROUP BY R_A, N_A "
		"ORDER BY Quantity_sold ASC;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockCommercialValue(void)
{
	return"SELECT CAST(SUM(QC_A * HT_A) "
		"AS DECIMAL(18, 2)) "
		"AS Stock_Commercial_Value "
		"FROM Article;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockPurchaseValue(void)
{
	return"SELECT CAST(SUM(QC_A * (HT_A * TVA_A)) "
		"AS DECIMAL(18, 2)) "
		"AS Stock_Purchase_Value "
		"FROM Article;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O_C(void)
{
	return"SELECT Customers.N_C "
		"AS Customer_name, Customers.S_C "
		"AS Customer_surname, SUM(Customer_Order.TTC_O) "
		"AS Total_Purchase_Amount "
		"FROM Customers "
		"JOIN Customer_Order ON Customers.ID_C = Customer_Order.ID_C "
		"GROUP BY Customers.N_C, "
		"Customers.S_C;";
}

System::String^ NS_Comp_Map_Stats::CLMapStats::simulateStockValue(void)
{
	return " SELECT CAST(SUM(QC_A * HT_A * (1 + " + getTVA() + " ) * (1 + " + getMargeCommerciale() + " ) * (1 - " + getDemarqueInconnue() + " ) * (1 - " + getDemarqueInconnue() + " )) AS DECIMAL(18, 2)) AS Stock_commercial_value FROM Article; ";
}

void NS_Comp_Map_Stats::CLMapStats::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}

void NS_Comp_Map_Stats::CLMapStats::setMargeCommerciale(System::String^ MargeCommerciale)
{
	this->MargeCommerciale = MargeCommerciale;
}

//void NS_Comp_Map_Stats::CLMapStats::setReduction(System::String^ Reduction)
//{
	//this->Reduction = Reduction;
//}

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
