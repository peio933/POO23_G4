#pragma once

namespace NS_Comp_Data
{
	ref class CLCAD
	{
	private:

		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;

	public:
		CLCAD(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		System::String^ executeQuery(System::String^);
		System::Int32 NS_Comp_Data::CLCAD::executeQueryForInt(System::String^);
		System::Decimal executeQueryForDecimal(System::String^);
	};
}

