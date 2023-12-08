#include "CLCAD.h"

NS_Comp_Data::CLCAD::CLCAD(void)
{


	this->sCnx = "Data Source=ROBIN\\MYSQL_A2_ROBIN;Initial Catalog=POO_Groupe4;Integrated Security=True";


	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
/*
System::Data::DataSet^ NS_Comp_Data::CLCAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
*/

System::Data::DataSet^ NS_Comp_Data::CLCAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;

	try
	{
		this->oDA->SelectCommand = this->oCmd;
		this->oDA->Fill(this->oDs, sDataTableName);
	}
	catch (System::Exception^ ex)
	{
		// Imprimez les détails de l'exception
		System::Console::WriteLine("Erreur lors de l'exécution de la requête : " + ex->Message);
	}

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
