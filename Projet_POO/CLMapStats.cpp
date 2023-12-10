#include "CLMapStats.h"

// Requête pour obtenir la moyenne des TTC_O dans la table Customer_Order
System::String^ NS_Comp_Map_Stats::CLMapStats::AverageTTC_O(void)
{
	return "SELECT AVG(TTC_O) "
			"AS Average_cart  "
			"FROM Customer_Order;";
}

// Requête pour obtenir la somme des TTC_O dans la table Customer_Order en fonction du mois et de l'année
System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O(void)
{
	return "SELECT SUM(TTC_O) AS ChiffreAffairesMensuel "
			"FROM Customer_Order "
			"WHERE MONTH(SD_O) = " + getMonthSalesRevenue() + " AND YEAR(SD_O) = " + getYearSalesRevenue() + " ; ";
}

// Requête pour obtenir les dix meilleurs vendus
System::String^ NS_Comp_Map_Stats::CLMapStats::SelectBestSellers(void)
{
	return	"SELECT TOP 10 R_A AS Référence_Article, N_A AS Nom_Article, "
			"SUM(QC_A) AS Quantité_vendue "
			"FROM composed "
			"JOIN Article "
			"ON composed.ID_A = Article.ID_A "
			"GROUP BY R_A, N_A "
			"ORDER BY Quantité_vendue DESC;";
}

// Requête pour obtenir les articles en stock en dessous du seuil de réapprovisionnement
System::String^ NS_Comp_Map_Stats::CLMapStats::SelectbelowThreshold(void)
{
	return	"SELECT R_A AS Référence_Produit, N_A AS Nom_Produit, QC_A AS Quantité_en_stock "
			"FROM Article WHERE QC_A < RT_A;";
}

// Requête pour obtenir les dix articles les moins vendus
System::String^ NS_Comp_Map_Stats::CLMapStats::SelectLessSold(void)
{
	return	"SELECT TOP 10 R_A AS Référence_Article, N_A AS Nom_Article, "
			"SUM(QC_A) AS Quantité_vendue "
			"FROM composed "
			"JOIN Article ON composed.ID_A = Article.ID_A "
			"GROUP BY R_A, N_A "
			"ORDER BY Quantité_vendue ASC;";
}

// Requête pour obtenir la valeur commerciale totale du stock
System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockCommercialValue(void)
{
	return	"SELECT CAST(SUM(QC_A * HT_A) "
			"AS DECIMAL(18, 2)) "
			"AS Stock_Commercial_Value "
			"FROM Article;";
}

// Requête pour obtenir la valeur d'achat totale du stock
System::String^ NS_Comp_Map_Stats::CLMapStats::QueryStockPurchaseValue(void)
{
	return	"SELECT CAST(SUM(QC_A * (HT_A * TVA_A)) "
			"AS DECIMAL(18, 2)) "
			"AS Stock_Purchase_Value "
			"FROM Article;";
}

// Requête pour obtenir le montant total des achats par client
System::String^ NS_Comp_Map_Stats::CLMapStats::SumTTC_O_C(void)
{
	return	"SELECT Customers.N_C "
			"AS Nom_Client, Customers.S_C "
			"AS Prénom_Client, SUM(Customer_Order.TTC_O) "
			"AS Montant_Total_Achats "
			"FROM Customers "
			"JOIN Customer_Order ON Customers.ID_C = Customer_Order.ID_C "
			"GROUP BY Customers.N_C, "
			"Customers.S_C;";
}

// Requête pour simuler la valeur du stock en fonction de certains paramètres
System::String^ NS_Comp_Map_Stats::CLMapStats::simulateStockValue(void)
{
	return "SELECT CAST(SUM(QC_A * HT_A * (1 + " + getTVA() + ") * (1 + " + getMargeCommerciale() + ") * (1 + " + getReductionCommerciale() + ") * (1 - " + getDemarqueInconnue() + ")) AS DECIMAL(18, 2)) AS Stock_commercial_value FROM Article;";
}

// Méthodes pour définir les paramètres utilisés dans la simulation de la valeur du stock
void NS_Comp_Map_Stats::CLMapStats::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}

void NS_Comp_Map_Stats::CLMapStats::setMargeCommerciale(System::String^ MargeCommerciale)
{
	this->MargeCommerciale = MargeCommerciale;
}

void NS_Comp_Map_Stats::CLMapStats::setReductionCommerciale(System::String^ ReductionCommerciale)
{
	this->ReductionCommerciale = ReductionCommerciale;
}

void NS_Comp_Map_Stats::CLMapStats::setDemarqueInconnue(System::String^ DemarqueInconnue)
{
	this->DemarqueInconnue = DemarqueInconnue;
}

// Méthodes pour définir le mois et l'année utilisés dans certaines requêtes
void NS_Comp_Map_Stats::CLMapStats::setMonthSalesRevenue(System::String^ MonthSalesRevenue)
{
	this->MonthSalesRevenue = MonthSalesRevenue;
}

void NS_Comp_Map_Stats::CLMapStats::setYearSalesRevenue(System::String^ YearSalesRevenue)
{
	this->YearSalesRevenue = YearSalesRevenue;
}

// Méthodes pour obtenir les paramètres utilisés dans la simulation de la valeur du stock
System::String^ NS_Comp_Map_Stats::CLMapStats::getTVA(void)
{
	return this->TVA;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getMargeCommerciale(void)
{
	return this->MargeCommerciale;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getReductionCommerciale(void)
{
	return this->ReductionCommerciale;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getDemarqueInconnue(void)
{
	return this->DemarqueInconnue;
}

// Méthodes pour obtenir le mois et l'année utilisés dans certaines requêtes
System::String^ NS_Comp_Map_Stats::CLMapStats::getMonthSalesRevenue(void)
{
	return this->MonthSalesRevenue;
}

System::String^ NS_Comp_Map_Stats::CLMapStats::getYearSalesRevenue(void)
{
	return this->YearSalesRevenue;
}
