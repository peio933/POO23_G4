#include "CLCAD.h"

NS_Comp_Data::CLCAD::CLCAD(void)
{
	this->sCnx = "Data Source=TERMINATOR\\MSSQL_PEIO;Initial Catalog=DB_06;Integrated Security=True;Encrypt=False";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ NS_Comp_Data::CLCAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

void NS_Comp_Data::CLCAD::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}
