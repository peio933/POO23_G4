#pragma once
#include "CLCAD.h"
#include "CLMapCustomers.h"

namespace NS_Comp_Cus {

	ref class CLCustomers
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Cus::CLMapCustomers^ oMapCustomers;
	public:
		CLCustomers(void);
		System::Data::DataSet^ selectCustomer(System::String^, System::String^);
		void insertCustomer(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateCustomer(System::String^, System::String^, System::String^);
		void deleteCustomer(System::String^, System::String^, System::String^);
	};
}