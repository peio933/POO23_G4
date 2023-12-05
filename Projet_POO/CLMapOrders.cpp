#include "CLMapOrders.h"

System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return  "SELECT R_O AS ReferenceCommande,"
            "DD_O AS DateCommande, SD_O AS DateLivraison,"
            "PD_O AS DatePaiement, MOP_O AS MoyenPaiement,"
            "HT_O AS PrixHT,TVA_O AS TVA,"
            "TTC_O AS PrixTTC, R_A AS ReferenceArticle,"
            "QC_A AS QuantiteCommandee"
            "FROM Customer_Order"
            "JOIN composed ON ID_O = ID_O"
            "JOIN Article ON ID_A = ID_A"
            "WHERE R_O = @ReferenceCommande;";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Insert(void)
{
    return  "IF @CustomerID IS NOT NULL"
            "BEGIN"
            "INSERT INTO Customer_Order(R_O, DD_O, SD_O, PD_O, MOP_O, HT_O, TVA_O, TTC_O, ID_C)"
            "VALUES(@ReferenceCommande, @DateCommande, @DateLivraison, @DatePaiement, @MoyenPaiement, @PrixHT, @TVA, @PrixTTC, @CustomerID);"
            "UPDATE Article"
            "SET QC_A = @QuantiteArticle"
            "WHERE R_A = @ReferenceArticle;"
            "INSERT INTO composed(ID_O, ID_A)"
            "VALUES(@OrderID, (SELECT ID_A FROM Article WHERE R_A = @ReferenceArticle));"
            "UPDATE Article"
            "SET QS_A = QS_A - @QuantiteArticle"
            "WHERE R_A = @ReferenceArticle;"
            "END"
            "ELSE"
            "BEGIN"
            "PRINT @Message;"
            "END";

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Delete(void)
{
    return  "DELETE FROM composed WHERE ID_O = @ID_Commande;"
            "DELETE FROM Customer_Order WHERE ID_O = @ID_Commande;";
}
System::String^ NS_Comp_Map_Orders::CLMapOrders::Update(void)
{
    return  "UPDATE a"
            "SET QC_A = @NewQuantiteArticle"
            "FROM Article a"
            "INNER JOIN composed ON ID_A = ID_A"
            "INNER JOIN Customer_Order ON ID_O = ID_O"
            "WHERE R_O = @ReferenceCommandeToUpdate;";
}

void NS_Comp_Map_Orders::CLMapOrders::setID_O(System::String^ ID_O)
{
    this->ID_O = ID_O;
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

void NS_Comp_Map_Orders::CLMapOrders::setPD_O(System::String^ PD_O)
{
    this->PD_O = PD_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setMOP_O(System::String^ MOP_O)
{
    this->MOP_O = MOP_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setHT_O(System::String^ HT_O)
{
    this->HT_O = HT_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setTVA_O(System::String^ TVA_O)
{
    this->TVA_O = TVA_O;
}

void NS_Comp_Map_Orders::CLMapOrders::setTTC_O(System::String^ TTC_O)
{
    this->TTC_O = TTC_O;
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getID_O(void) { return this->ID_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getR_O(void) { return this->R_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getDD_O(void) { return this->DD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getSD_O(void) { return this->SD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getPD_O(void) { return this->PD_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getMOP_O(void) { return this->MOP_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getHT_O(void) { return this->HT_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getTVA_O(void) { return this->TVA_O; }
System::String^ NS_Comp_Map_Orders::CLMapOrders::getTTC_O(void) { return this->TTC_O; }

