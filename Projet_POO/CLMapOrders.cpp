#include "CLMapOrders.h"

System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return "SELECT * FROM Prosit_6;";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Insert(void)
{
    return "INSERT INTO Prosit_6 (ID_O, R_O, DD_O, SD_O, PD_O, MOP_O, HT_O, TVA_O, TTC_O) VALUES('" + this->ID_O + "','" + this->R_O + "','" + this->DD_O + "','" + this->SD_O + "','" + this->PD_O + "','" + this->MOP_O + "','" + this->HT_O + "','" + this->TVA_O + "','" + this->TTC_O + "');";

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Delete(void)
{
    return "DELETE FROM Prosit_6 WHERE id = " + this->ID_O + ";";
}
System::String^ NS_Comp_Map_Orders::CLMapOrders::Update(void)
{
    return "UPDATE Prosit_6 SET ID_O = '" + this->ID_O + "', R_O = '" + this->R_O + "', DD_O = '" + this->DD_O + "', SD_O = '" + this->SD_O + "', PD_O = '" + this->PD_O + "', MOP_O = '" + this->MOP_O + "', HT_O = '" + this->HT_O + "', TVA_O = '" + this->TVA_O + "', TTC_O = '" + this->TTC_O + "' WHERE id = " + this->ID_O + ";";
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

