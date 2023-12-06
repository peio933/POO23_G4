#include "CLMapStock.h"

System::String^ NS_Comp_Map_Stock::CLMapStock::SelectAll(void)
{
    return "SELECT * FROM ARTICLE";
}

System::String^ NS_Comp_Map_Stock::CLMapStock::Select(void)
{
    return "SELECT * FROM ARTICLE WHERE R_A = '" + getR_A() + "'; ";
}

System::String^ NS_Comp_Map_Stock::CLMapStock::Insert(void)
{
    return "INSERT INTO Article (R_A, N_A, QC_A, QS_A, RT_A, HT_A, TVA_A, D_A) VALUES('" + getR_A() + "', '" + getN_A() + "', NULL, " + getQS_A() + ", " + getRT_A() + ", " + getHT_A() + ", " + getTVA_A() + ", '" + getD_A() + "');";
}

System::String^ NS_Comp_Map_Stock::CLMapStock::Delete(void)
{
    return "DELETE FROM Article WHERE R_A = '" + getR_A() + "' AND N_A = '" + getN_A() + "'; ";
}

System::String^ NS_Comp_Map_Stock::CLMapStock::Update(void)
{
    return "UPDATE Article SET QS_A = " + getQS_A() + ", HT_A = " + getHT_A() + ", RT_A = " + getRT_A() + ", TVA_A = " + getTVA_A() + ", D_A = '" + getD_A() + "' WHERE R_A = '" + getR_A() + "';";
}

void NS_Comp_Map_Stock::CLMapStock::setID_A(System::String^ ID_A)
{
    this->ID_A = ID_A;
}

void NS_Comp_Map_Stock::CLMapStock::setR_A(System::String^ R_A)
{
    this->R_A = R_A;
}

void NS_Comp_Map_Stock::CLMapStock::setN_A(System::String^ N_A)
{
    this->N_A = N_A;
}

void NS_Comp_Map_Stock::CLMapStock::setQS_A(System::String^ QS_A)
{
    this->QS_A = QS_A;
}

void NS_Comp_Map_Stock::CLMapStock::setHT_A(System::String^ HT_A)
{
    this->HT_A = HT_A;
}

void NS_Comp_Map_Stock::CLMapStock::setRT_A(System::String^ RT_A)
{
    this->RT_A = RT_A;
}

void NS_Comp_Map_Stock::CLMapStock::setTVA_A(System::String^ TVA_A)
{
    this->TVA_A = TVA_A;
}

void NS_Comp_Map_Stock::CLMapStock::setD_A(System::String^ D_A)
{
    this->D_A = D_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getID_A(void)
{
    return this->ID_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getR_A(void)
{
    return this->R_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getN_A(void)
{
    return this->N_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getQS_A(void)
{
    return this->QS_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getHT_A(void)
{
    return this->HT_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getRT_A(void)
{
    return this->RT_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getTVA_A(void)
{
    return this->TVA_A;
}

System::String^ NS_Comp_Map_Stock::CLMapStock::getD_A(void)
{
    return this->D_A;
}
