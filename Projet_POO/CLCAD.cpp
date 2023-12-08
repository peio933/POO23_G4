#include "CLCAD.h"

NS_Comp_Data::CLCAD::CLCAD(void)
{


	this->sCnx = "Data Source=NAS\\MSSQL_MALIK;Initial Catalog=POO_Groupe4;Integrated Security=True";


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
System::String^ NS_Comp_Data::CLCAD::executeQuery(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
	System::String^ result = "";
	if (reader->Read()) {
		result = reader->GetString(0); 
	}
	reader->Close();
	this->oCnx->Close();
	return result;
}
System::Int32 NS_Comp_Data::CLCAD::executeQueryForInt(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
	System::Int32 result = 0; 
	if (reader->Read()) {
		result = reader->GetInt32(0);
	}
	reader->Close();
	this->oCnx->Close();
	return result;
}
System::Decimal NS_Comp_Data::CLCAD::executeQueryForDecimal(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
	System::Decimal result = 0; 
	if (reader->Read()) {
		result = reader->GetDecimal(0);
	}
	reader->Close();
	this->oCnx->Close();
	return result;
}
