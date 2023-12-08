#pragma once
#include "CLCAD.h"
#include "CLMapOrders.h"

namespace NS_Comp_Orders {
	ref class CLOrders
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Orders::CLMapOrders^ oMapOrders;
	public:
		CLOrders(void);
		System::Data::DataSet^ loadOrders(System::String^);
		System::Data::DataSet^ selectArticles(System::String^, System::String^);
		System::String^ selectName(System::String^);
		System::String^ selectSurname(System::String^);
		System::String^ selectAdress(System::String^);
		System::String^ selectCity(System::String^);
		System::String^ selectHT(System::String^);
		System::String^ selectTVA(System::String^);
		System::String^ selectTTC(System::String^);
		void insertOrders(System::String^, System::String^, System::String^);
		void updateOrders(System::String^, System::String^, System::String^);
		void deleteOrders(System::String^);
	};
}

