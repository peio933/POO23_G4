#pragma once
#include "CLCAD.h"
#include "CLMapEmployees.h"
namespace NS_Comp_Employees{
	ref class CLEmployees
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Employees::CLMapEmployees^ oMappEmployees;


	public:
		CLEmployees(void);
		System::Data::DataSet^ loadEmployees(System::String^);
		System::Data::DataSet^ selectEmployee(System::String^, System::String^);
		void insertEmployee(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateEmployee(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deleteEmployee(System::String^, System::String^, System::String^);
	};
}

