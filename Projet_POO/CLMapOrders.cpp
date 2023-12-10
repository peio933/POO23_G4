#include "CLMapOrders.h"

// Méthode pour récupérer toutes les colonnes de la table Customer_Order
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectAll(void)
{
    return "SELECT R_O AS Reference, PD_O AS [Payment Date], SD_O AS [Send Date], DD_O AS [Delivery Date], MOP_O AS [Mean of Payment], HT_O AS [HT Price], TVA_O AS TVA, TTC_O AS [TTC Price] FROM Customer_Order";
}

// Méthode pour récupérer le prénom du client associé à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectName(void)
{
    return "SELECT C.N_C AS PrénomClient "
            "FROM Customers AS C "
            "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
            "WHERE CO.R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer le nom du client associé à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectSurname(void)
{
    return "SELECT C.S_C AS NomClient "
            "FROM Customers AS C "
            "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
            "WHERE CO.R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer l'adresse du client associée à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectAdress(void)
{
    return "SELECT CONCAT(A.SNB, ' ', A.SN) AS AdresseClient "
            "FROM Customers AS C "
            "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
            "JOIN Adress AS A ON C.ID_C = A.ID_C "
            "WHERE CO.R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer la ville du client associée à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectCity(void)
{
    return "SELECT CONCAT(A.PC, ' ', A.N_V) AS VilleClient "
            "FROM Customers AS C "
            "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
            "JOIN Adress AS A ON C.ID_C = A.ID_C "
            "WHERE CO.R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer le prix HT associé à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectHT(void)
{
    return "SELECT HT_O AS HTPrice FROM Customer_Order "
            "WHERE R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer la TVA associée à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectTVA(void)
{
    return "SELECT TVA_O AS TVA FROM Customer_Order "
            "WHERE R_O = '" + getR_O() + "'; ";
}

// Méthode pour récupérer le prix TTC associé à une commande spécifique
System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectTTC(void)
{
    return "SELECT "
            "CASE "
            "WHEN DATEPART(DAY, CO.PD_O) = DATEPART(DAY, C.BD_C) AND DATEPART(MONTH, CO.PD_O) = DATEPART(MONTH, C.BD_C) THEN CO.TTC_O * 0.9 "
            "WHEN DATEPART(DAY, CO.PD_O) = DATEPART(DAY,(SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) "
            "AND DATEPART(MONTH, CO.PD_O) = DATEPART(MONTH, (SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) "
            "AND DATEPART(YEAR, CO.PD_O) != DATEPART(YEAR, (SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) THEN CO.TTC_O * 0.95 "
            "ELSE CO.TTC_O "
            "END "
            "FROM Customer_Order CO "
            "INNER JOIN Customers C ON CO.ID_C = C.ID_C "
            "WHERE CO.R_O = '" + getR_O() + "'; ";
}

// Méthode pour ajouter un article à une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::AddArticle(void)
{
    return  "DECLARE @Quantity INT = " + getQuantity() + " "
            "DECLARE @RefCommande VARCHAR(60) = '" + getR_O() + "' "
            "// ... (suite du code)";
}

// Méthode pour supprimer un article d'une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::DeleteArticle(void)
{
    return  " DECLARE @Quantity INT = " + getQuantity() + " "
            "// ... (suite du code)";
}

// Méthode pour appliquer une réduction sur une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::Discount(void)
{
    return  "SELECT "
            "// ... (suite du code)";
}

// Méthode pour sélectionner les détails d'une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return  "SELECT A.R_A AS [Article Reference], A.N_A AS [Article Name], A.HT_A AS [HT Price], A.TVA_A * 100 AS [TVA (%)], CMP.Quantity "
            "// ... (suite du code)";
}

// Méthode pour insérer une nouvelle commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::Insert(void)
{
    return  "DECLARE @NomClient VARCHAR(30) "
            "// ... (suite du code)";
}

// Méthode pour supprimer une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::Delete(void)
{
    return  "DELETE FROM composed WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = '" + getR_O() + "'); "
            "DELETE FROM Customer_Order WHERE R_O = '" + getR_O() + "'; ";
}

// Méthode pour mettre à jour les dates d'envoi et de livraison d'une commande
System::String^ NS_Comp_Map_Orders::CLMapOrders::Update(void)
{
    return  "UPDATE Customer_Order "
            "// ... (suite du code)";
}

// Méthodes pour définir les propriétés de la classe
void NS_Comp_Map_Orders::CLMapOrders::setR_O(System::String^ R_O)
{
    this->R_O = R_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setDD_O(System::String^ DD_O)
{
    this->DD_O = DD_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setSD_O(System::String^ SD_O)
{
    this->SD_O = SD_O;
}


void NS_Comp_Map_Orders::CLMapOrders::setMOP_O(System::String^ MOP_O)
{
    this->MOP_O = MOP_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setN_C(System::String^ N_C)
{
    this->N_C = N_C;
}

void NS_Comp_Map_Orders::CLMapOrders::setS_C(System::String^S_C)
{
    this->S_C = S_C;
}

void NS_Comp_Map_Orders::CLMapOrders::setR_A(System::String^ R_A)
{
    this->R_A = R_A;
}

void NS_Comp_Map_Orders::CLMapOrders::setQuantity(System::String^ Quantity)
{
    this->Quantity = Quantity;
}

// Méthodes pour récupérer les valeurs des propriétés de la classe
System::String^ NS_Comp_Map_Orders::CLMapOrders::getR_O(void) { return this->R_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getDD_O(void) { return this->DD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getSD_O(void) { return this->SD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getMOP_O(void) { return this->MOP_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getN_C(void) { return this->N_C; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getS_C(void) { return this->S_C; }

System::String^ NS_Comp_Map_Orders::CLMapOrders::getR_A(void)
{
    return this->R_A;
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getQuantity(void)
{
    return this->Quantity;
}

