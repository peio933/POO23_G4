#include "CLOrders.h"

NS_Comp_Orders::CLOrders::CLOrders(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapOrders = gcnew NS_Comp_Map_Orders::CLMapOrders();
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::loadOrders(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMapOrders->SelectAll();
    return this->oCAD->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectArticles(System::String^ R_O, System::String^ dataTableName)
{
    this->oMapOrders->setR_O(R_O);
    System::String^ sql;
    sql = this->oMapOrders->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

System::String^ NS_Comp_Orders::CLOrders::selectName(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQuery(this->oMapOrders->SelectName());
}

System::String^ NS_Comp_Orders::CLOrders::selectSurname(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQuery(this->oMapOrders->SelectSurname());
}

System::String^ NS_Comp_Orders::CLOrders::selectAdress(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQuery(this->oMapOrders->SelectAdress());
}

System::String^ NS_Comp_Orders::CLOrders::selectCity(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQuery(this->oMapOrders->SelectCity());
}

System::String^ NS_Comp_Orders::CLOrders::selectHT(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectHT()).ToString();
}

System::String^ NS_Comp_Orders::CLOrders::selectTVA(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTVA()).ToString();
}

System::String^ NS_Comp_Orders::CLOrders::selectTTC(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQueryForDecimal(this->oMapOrders->SelectTTC()).ToString();
}

System::String^ NS_Comp_Orders::CLOrders::discount(System::String^ R_O)
{
    this->oMapOrders->setR_O(R_O);
    return this->oCAD->executeQuery(this->oMapOrders->Discount());
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::addArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);
    return this->oCAD->getRows(this->oMapOrders->AddArticle(), dataTableName);
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::deleteArticle(System::String^ R_O, System::String^ R_A, System::String^ Quantity, System::String^ dataTableName)
{
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setR_A(R_A);
    this->oMapOrders->setQuantity(Quantity);
    return this->oCAD->getRows(this->oMapOrders->DeleteArticle(), dataTableName);
}

void NS_Comp_Orders::CLOrders::insertOrders (System::String^ N_C, System::String^ S_C, System::String^ MOP_O)
{
    System::String^ sql;
    this->oMapOrders->setS_C(S_C);
    this->oMapOrders->setN_C(N_C);
    this->oMapOrders->setMOP_O(MOP_O);
    sql = this->oMapOrders->Insert();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::updateOrders(System::String^ R_O, System::String^ SD_O, System::String^ DD_O)
{
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setDD_O(DD_O);
    this->oMapOrders->setSD_O(SD_O);
    sql = this->oMapOrders->Update();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ R_O)
{
    System::String^ sql;
    this->oMapOrders->setR_O(R_O);
    sql = this->oMapOrders->Delete();
    this->oCAD->actionRows(sql);
}
