#include "CLMapOrders.h"

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectAll(void)
{
    return "SELECT R_O AS Reference, PD_O AS [Payment Date], SD_O AS [Send Date], DD_O AS [Delivery Date], MOP_O AS [Mean of Payment], HT_O AS [HT Price], TVA_O AS TVA, TTC_O AS [TTC Price] FROM Customer_Order";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::SelectName(void)
{
    return "SELECT C.N_C AS PrénomClient "
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

System::String^ NS_Comp_Map_Orders::CLMapOrders::AddArticle(void)
{
    return "DECLARE @Quantity INT = " + getQuantity() + " "
        "DECLARE @RefCommande VARCHAR(60) = '" + getR_O() + "' "
        "DECLARE @RefArticle VARCHAR(60) = '" + getR_A() + "' "
        "IF EXISTS(SELECT 1 FROM Article WHERE R_A = @RefArticle) "
        "BEGIN "
        "IF EXISTS(SELECT 1 FROM Article WHERE R_A = @RefArticle AND QS_A > @Quantity) "
        "BEGIN "
        "IF EXISTS(SELECT 1 FROM Customer_Order WHERE R_O = @RefCommande) "
        "BEGIN "
        "UPDATE Article "
        "SET QS_A = QS_A - @Quantity, "
        "QC_A = QC_A + @Quantity "
        "WHERE R_A = @RefArticle; "
        "UPDATE Customer_Order "
        "SET HT_O = HT_O + (SELECT HT_A * @Quantity FROM Article WHERE R_A = @RefArticle), "
        "TVA_O = TVA_O + (SELECT HT_A * TVA_A * @Quantity FROM Article WHERE R_A = @RefArticle), "
        "TTC_O = TTC_O + (SELECT(HT_A + (HT_A * TVA_A)) * @Quantity FROM Article WHERE R_A = @RefArticle) "
        "WHERE R_O = @RefCommande; "
        "IF NOT EXISTS(SELECT 1 FROM composed WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) AND ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle)) "
        "BEGIN "
        "INSERT INTO composed(ID_O, ID_A, Quantity) "
        "VALUES((SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande), (SELECT ID_A FROM Article WHERE R_A = @RefArticle), @Quantity); "
        "END "
        "ELSE "
        "BEGIN "
        "UPDATE composed "
        "SET Quantity = Quantity + @Quantity "
        "WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) AND ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle) "
        "END "
        "SELECT 'Article ajouté à la commande' AS Message; "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'La référence commande que vous avez rentré est inexistante' AS Message; "
        "END "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'La quantité demandée excède notre stock disponible' AS Message; "
        "END "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'La référence article que vous avez rentré est inexistante' AS Message; "
        "END ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::DeleteArticle(void)
{
    return " DECLARE @Quantity INT = " + getQuantity() + " "
        "DECLARE @RefCommande VARCHAR(60) = '" + getR_O() + "' "
        "DECLARE @RefArticle VARCHAR(60) = '" + getR_A() + "' "
        "IF EXISTS(SELECT 1 FROM Customer_Order WHERE R_O = @RefCommande) "
        "BEGIN "
        "IF EXISTS(SELECT 1 FROM composed WHERE ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle) AND ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande)) "
        "BEGIN "
        "IF EXISTS(SELECT 1 FROM composed WHERE ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle) AND ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) AND Quantity >= @Quantity) "
        "BEGIN "
        "UPDATE Article "
        "SET QS_A = QS_A + @Quantity, "
        "QC_A = QC_A - @Quantity "
        "WHERE R_A = @RefArticle; "
        "UPDATE Customer_Order "
        "SET HT_O = HT_O - (SELECT HT_A * @Quantity FROM Article WHERE R_A = @RefArticle), "
        "TVA_O = TVA_O - (SELECT HT_A * TVA_A * @Quantity FROM Article WHERE R_A = @RefArticle), "
        "TTC_O = TTC_O - (SELECT(HT_A + (HT_A * TVA_A)) * @Quantity FROM Article WHERE R_A = @RefArticle) "
        "WHERE R_O = @RefCommande; "
        "IF((SELECT Quantity FROM composed WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) AND ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle)) = @Quantity) "
        "BEGIN "
        "DELETE composed "
        "WHERE ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle) AND ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) "
        "END "
        "ELSE "
        "BEGIN "
        "UPDATE composed "
        "SET Quantity = Quantity - @Quantity "
        "WHERE ID_O = (SELECT ID_O FROM Customer_Order WHERE R_O = @RefCommande) AND ID_A = (SELECT ID_A FROM Article WHERE R_A = @RefArticle) "
        "END "
        "SELECT 'Article supprimé de la commande' AS Message; "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'Quantité rentré supérieur à la quantité dans la commande' AS Message; "
        "END "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'Aucun article avec cette référence dans la commande' AS Message; "
        "END "
        "END "
        "ELSE "
        "BEGIN "
        "SELECT 'La référence commande que vous avez rentré est inexistante' AS Message; "
        "END ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Discount(void)
{
    return "SELECT "
        "CASE "
        "WHEN DATEPART(DAY, CO.PD_O) = DATEPART(DAY, C.BD_C) AND DATEPART(MONTH, CO.PD_O) = DATEPART(MONTH, C.BD_C) THEN 'Joyeux Anniversaire (-10%)' "
        "WHEN DATEPART(DAY, CO.PD_O) = DATEPART(DAY,(SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) "
        "AND DATEPART(MONTH, CO.PD_O) = DATEPART(MONTH, (SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) "
        "AND DATEPART(YEAR, CO.PD_O) != DATEPART(YEAR, (SELECT MIN(CO2.PD_O) FROM Customer_Order CO2 WHERE CO2.ID_C = C.ID_C)) THEN 'Anniversaire de votre première commande (-5%)' "
        "ELSE '' "
        "END AS Message "
        "FROM Customer_Order CO "
        "INNER JOIN Customers C ON CO.ID_C = C.ID_C "
        "WHERE CO.R_O = '" + getR_O() + "'; ";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return "SELECT A.R_A AS [Article Reference], A.N_A AS [Article Name], A.HT_A AS [HT Price], A.TVA_A * 100 AS [TVA (%)], CMP.Quantity "
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

void NS_Comp_Map_Orders::CLMapOrders::setR_A(System::String^ R_A)
{
    this->R_A = R_A;
}

void NS_Comp_Map_Orders::CLMapOrders::setQuantity(System::String^ Quantity)
{
    this->Quantity = Quantity;
}

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

