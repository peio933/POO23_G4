#include "CLStock.h"

NS_Comp_Stock::CLStock::CLStock(void)
{
    this->oCAD = gcnew NS_Comp_Data::CLCAD();
    this->oMapStock = gcnew NS_Comp_Map_Stock::CLMapStock();
}

System::Data::DataSet^ NS_Comp_Stock::CLStock::loadArticles(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMapStock->SelectAll();
    return this->oCAD->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Stock::CLStock::selectArticle(System::String^ R_A, System::String^ dataTableName)
{
    this->oMapStock->setR_A(R_A);
    System::String^ sql;
    sql = this->oMapStock->Select();
    return this->oCAD->getRows(sql, dataTableName);
}

void NS_Comp_Stock::CLStock::insertArticle(System::String^ R_A, System::String^ N_A, System::String^ QS_A, System::String^ RT_A, System::String^ HT_A, System::String^ TVA_A, System::String^ D_A)
{
    this->oMapStock->setR_A(R_A);
    this->oMapStock->setN_A(N_A);
    this->oMapStock->setQS_A(QS_A);
    this->oMapStock->setRT_A(RT_A);
    this->oMapStock->setHT_A(HT_A);
    this->oMapStock->setTVA_A(TVA_A);
    this->oMapStock->setD_A(D_A);
    this->oCAD->actionRows(this->oMapStock->Insert());
}

void NS_Comp_Stock::CLStock::updateArticle(System::String^ R_A, System::String^ QS_A, System::String^ RT_A, System::String^ HT_A, System::String^ TVA_A, System::String^ D_A)
{
    this->oMapStock->setQS_A(QS_A);
    this->oMapStock->setHT_A(HT_A);
    this->oMapStock->setRT_A(RT_A);
    this->oMapStock->setTVA_A(TVA_A);
    this->oMapStock->setD_A(D_A);
    this->oMapStock->setR_A(R_A);
    this->oCAD->actionRows(this->oMapStock->Update());
}

System::Data::DataSet^ NS_Comp_Stock::CLStock::deleteArticle(System::String^ R_A, System::String^ N_A, System::String^ dataTableName)
{
    this->oMapStock->setR_A(R_A);
    this->oMapStock->setN_A(N_A);
    return this->oCAD->getRows(this->oMapStock->Delete(), dataTableName);
}
