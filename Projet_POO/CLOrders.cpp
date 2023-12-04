#include "CLOrders.h"

NS_Comp_Orders::CLOrders::CLOrders(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMappOrders = gcnew NS_Comp_Map_Orders::CLMapOrders();
}

System::Data::DataSet^ NS_Comp_Orders::CLOrders::selectOrders(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappOrders->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Orders::CLOrders::insertOrders(System::String^ ID_O, System::String^ R_O, System::String^ DD_O, System::String^ SD_O, System::String^ PD_O, System::String^ MOP_O, System::String^ HT_O, System::String^ TVA_O, System::String^ TTC_O)
{
    System::String^ sql;

    this->oMappOrders->setID_O(ID_O);
    this->oMappOrders->setR_O(R_O);
    this->oMappOrders->setDD_O(DD_O);
    this->oMappOrders->setSD_O(SD_O);
    this->oMappOrders->setPD_O(PD_O);
    this->oMappOrders->setMOP_O(MOP_O);
    this->oMappOrders->setSD_O(HT_O);
    this->oMappOrders->setTVA_O(TVA_O);
    this->oMappOrders->setTTC_O(TTC_O);
    sql = this->oMappOrders->Insert();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::updateOrders(System::String^ ID_O, System::String^ R_O, System::String^ DD_O, System::String^ SD_O, System::String^ PD_O, System::String^ MOP_O, System::String^ HT_O, System::String^ TVA_O, System::String^ TTC_O)
{
    System::String^ sql;

    this->oMappOrders->setID_O(ID_O);
    this->oMappOrders->setR_O(R_O);
    this->oMappOrders->setDD_O(DD_O);
    this->oMappOrders->setSD_O(SD_O);
    this->oMappOrders->setPD_O(PD_O);
    this->oMappOrders->setMOP_O(MOP_O);
    this->oMappOrders->setSD_O(HT_O);
    this->oMappOrders->setTVA_O(TVA_O);
    this->oMappOrders->setTTC_O(TTC_O);
    sql = this->oMappOrders->Update();
    this->oCAD->actionRows(sql);
}

void NS_Comp_Orders::CLOrders::deleteOrders(System::String^ ID_O)
{
    System::String^ sql;

    this->oMappOrders->setID_O(ID_O);
    sql = this->oMappOrders->Delete();

    this->oCAD->actionRows(sql);
}
