#pragma once
#include "CLCAD.h"

namespace NS_Comp_Employees
{
	ref class CLEmployees
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		//NS_Comp_Map_Employees::CLmapEmployees^ oMappEmployees;
		
	public:
		CLEmployees(void);
		System::Data::DataSet^ selectEmployee(System::String^);
		void insertEmployee(System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateEmployee(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deleteEmployee(System::String^);
	};
}

