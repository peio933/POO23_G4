#pragma once

#pragma once
#include "CLCAD.h"
#include "CLmapOrders.h"


namespace NS_Comp_Orders {

	ref class CLOrders
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Orders::CLMapOrders^ oMappOrders;

	public:
		CLOrders(void);
		System::Data::DataSet^ selectOrders(System::String^);
		void insertOrders(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateOrders(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deleteOrders(System::String^);
	};

}

