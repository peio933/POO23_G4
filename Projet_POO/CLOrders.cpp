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

System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectOrders(System::String^ R_O, System::String^ dataTableName)
{
    this->oMapOrders->setR_O(R_O);

    System::String^ sql;

    sql = this->oMapOrders->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Orders::CLOrders::insertOrders(System::String^ R_O, System::String^ DD_O, System::String^ SD_O, System::String^ PD_O, System::String^ MOP_O, System::String^ TVA_O)
{
    System::String^ sql;

    //this->oMapOrders->setID_O(ID_O);
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setDD_O(DD_O);
    this->oMapOrders->setSD_O(SD_O);
    this->oMapOrders->setPD_O(PD_O);
    this->oMapOrders->setMOP_O(MOP_O);
    //this->oMapOrders->setSD_O(HT_O);
    this->oMapOrders->setTVA_O(TVA_O);
    //this->oMapOrders->setTTC_O(TTC_O);
    sql = this->oMapOrders->Insert();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::updateOrders(System::String^ R_O, System::String^ DD_O, System::String^ SD_O, System::String^ PD_O, System::String^ MOP_O, System::String^ TVA_O)
{
    System::String^ sql;

    //this->oMapOrders->setID_O(ID_O);
    this->oMapOrders->setR_O(R_O);
    this->oMapOrders->setDD_O(DD_O);
    this->oMapOrders->setSD_O(SD_O);
    this->oMapOrders->setPD_O(PD_O);
    this->oMapOrders->setMOP_O(MOP_O);
    //this->oMapOrders->setSD_O(HT_O);
    this->oMapOrders->setTVA_O(TVA_O);
    //this->oMapOrders->setTTC_O(TTC_O);
    sql = this->oMapOrders->Update();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ ID_O)
{
    System::String^ sql;

    this->oMapOrders->setID_O(ID_O);
    sql = this->oMapOrders->Delete();

    this->oCAD->actionRows(sql);
}
