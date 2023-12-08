#include "CLMapOrders.h"

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectAll(void)
{
    return "SELECT R_O AS Reference, PD_O AS [Payment Date], SD_O AS [Send Date], DD_O AS [Delivery Date], MOP_O AS [Mean of Payment], HT_O AS [HT Price], TVA_O AS TVA, TTC_O AS [TTC Price] FROM Customer_Order";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectName(void)
{
    return "SELECT C.N_C AS Pr�nomClient "
        "FROM Customers AS C "
        "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
        "WHERE CO.R_O = '"+ getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectSurname(void)
{
    return "SELECT C.S_C AS NomClient "
        "FROM Customers AS C "
        "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
        "WHERE CO.R_O = '"+ getR_O() +"'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectAdress(void)
{
    return "SELECT CONCAT(A.SNB, ' ', A.SN) AS AdresseClient "
        "FROM Customers AS C "
        "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
        "JOIN Adress AS A ON C.ID_C = A.ID_C "
        "WHERE CO.R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectCity(void)
{
    return "SELECT CONCAT(A.PC, ' ', A.N_V) AS VilleClient "
        "FROM Customers AS C "
        "JOIN Customer_Order AS CO ON C.ID_C = CO.ID_C "
        "JOIN Adress AS A ON C.ID_C = A.ID_C "
        "WHERE CO.R_O = '"+ getR_O() +"'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectHT(void)
{
    return "SELECT HT_O AS HTPrice FROM Customer_Order "
        "WHERE R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectTVA(void)
{
    return "SELECT TVA_O AS TVA FROM Customer_Order "
        "WHERE R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectTTC(void)
{
    return "SELECT TTC_O AS TTCPrice FROM Customer_Order "
        "WHERE R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return "SELECT A.R_A, A.N_A, A.HT_A, A.TVA_A "
        "FROM Customer_Order AS CO "
        "JOIN composed AS CMP ON CO.ID_O = CMP.ID_O "
        "JOIN Article AS A ON CMP.ID_A = A.ID_A "
        "WHERE CO.R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Insert(void)
{
    return "DECLARE @NomClient VARCHAR(30) "
        "DECLARE @PrenomClient VARCHAR(30) "
        "DECLARE @MoyenPaiement VARCHAR(30) "
        "SET @PrenomClient = '" + getN_C() + "'; "
        "SET @NomClient = '" + getS_C() + "'; "
        "SET @MoyenPaiement = '" + getMOP_O() + "'; "
        "IF EXISTS(SELECT 1 FROM Customers WHERE N_C = @PrenomClient AND S_C = @NomClient) "
        "BEGIN "
        "DECLARE @NumeroCommande INT; "
        "SET @NumeroCommande = ISNULL((SELECT MAX(CAST(RIGHT(R_O, 3) AS INT)) FROM Customer_Order WHERE ID_C = (SELECT ID_C FROM Customers WHERE N_C = @PrenomClient AND S_C = @NomClient)), 0) + 1; "
        "DECLARE @ReferenceCommande VARCHAR(50); "
        "SET @ReferenceCommande = LEFT(@PrenomClient, 2) + LEFT(@NomClient, 2) + CONVERT(VARCHAR(4), YEAR(GETDATE())) + (SELECT N_V FROM Adress WHERE ID_C = (SELECT ID_C FROM Customers WHERE N_C = @PrenomClient AND S_C = @NomClient)) + RIGHT('000' + CAST(@NumeroCommande AS VARCHAR(3)), 3); "
        "INSERT INTO Customer_Order(R_O, DD_O, SD_O, PD_O, MOP_O, HT_O, TVA_O, TTC_O, ID_C) "
        "VALUES(@ReferenceCommande, DATEADD(day, 7, GETDATE()), DATEADD(day, 1, GETDATE()), GETDATE(), @MoyenPaiement, 0, 0, 0, (SELECT ID_C FROM Customers WHERE N_C = @PrenomClient AND S_C = @NomClient)); "
        "END "
        "ELSE "
        "BEGIN "
        "PRINT 'Customer invalid'; "
        "END ";

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Delete(void)
{
    return  "DELETE FROM composed WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = '" + getR_O() + "'); "
        "DELETE FROM Customer_Order WHERE R_O = '" + getR_O() + "'; ";
}
System::String^ NS_Comp_Map_Orders::CLMapOrders::Update(void)
{
    return  "UPDATE Customer_Order "
        "SET SD_O = '" + getSD_O() + "', "
        "DD_O = '" + getDD_O() + "' "
        "WHERE R_O = '" + getR_O() + "'; ";
}

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

System::String^ NS_Comp_Map_Orders::CLMapOrders::getR_O(void) { return this->R_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getDD_O(void) { return this->DD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getSD_O(void) { return this->SD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getMOP_O(void) { return this->MOP_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getN_C(void) { return this->N_C; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getS_C(void) { return this->S_C; }

