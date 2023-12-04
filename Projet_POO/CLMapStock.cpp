#include "CLMapStock.h"

System::String^ CLMapStock::Select(void)
{
    return "SELECT * FROM Article WHERE R_A = "+ getR_A() + "; ";
}

System::String^ CLMapStock::Insert(void)
{
    return "INSERT INTO Article (R_A, N_A, QC_A, QS_A, RT_A, HT_A, TVA_A, D_A) VALUES(" + getR_A() + ", " + getN_A() + ", NULL, " + getQS_A() + ", " + getRT_A() + ", " + getHT_A() + ", " + getTVA_A() + ", " + getQS_A() + ";";
}

System::String^ CLMapStock::Delete(void)
{
    return "DELETE FROM Article WHERE R_A = " + getR_A() + "AND N_A = " + getN_A() + "; ";
}

System::String^ CLMapStock::Update(void)
{
    return "UPDATE Article SET QS_A = " + getQS_A() + ", HT_A = " + getHT_A() + ", RT_A = " + getRT_A() + ", TVA_A = " + getTVA_A() + ", D_A = " + getD_A() + " WHERE R_A = " + getR_A() + "; ";
}

void CLMapStock::setID_A(System::String^ ID_A)
{
    this->ID_A = ID_A;
}

void CLMapStock::setR_A(System::String^ R_A)
{
    this->R_A = R_A;
}

void CLMapStock::setN_A(System::String^ N_A)
{
    this->N_A = N_A;
}

void CLMapStock::setQC_A(System::String^ QC_A)
{
    this->QC_A = QC_A;
}

void CLMapStock::setQS_A(System::String^ QS_A)
{
    this->QS_A = QS_A;
}

void CLMapStock::setHT_A(System::String^ HT_A)
{
    this->HT_A = HT_A;
}

void CLMapStock::setRT_A(System::String^)
{
    this->RT_A = RT_A;
}

void CLMapStock::setTVA_A(System::String^)
{
    this->TVA_A = TVA_A;
}

void CLMapStock::setD_A(System::String^)
{
    this->D_A = D_A;
}

System::String^ CLMapStock::getID_A(void)
{
    return this->ID_A;
}

System::String^ CLMapStock::getR_A(void)
{
    return this->R_A;
}

System::String^ CLMapStock::getN_A(void)
{
    return this->N_A;
}

System::String^ CLMapStock::getQC_A(void)
{
    return this->QC_A;
}

System::String^ CLMapStock::getQS_A(void)
{
    return this->QS_A;
}

System::String^ CLMapStock::getHT_A(void)
{
    return this->R_A;
}

System::String^ CLMapStock::getRT_A(void)
{
    return this->RT_A;
}

System::String^ CLMapStock::getTVA_A(void)
{
    return this->TVA_A;
}

System::String^ CLMapStock::getD_A(void)
{
    return this->D_A;
}
