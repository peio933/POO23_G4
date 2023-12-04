#pragma once

namespace NS_Comp_Map_Employees
{
	ref class CLMapEmployees
	{
	private:
		System::String^ ID_E;
		System::String^ N_E;
		System::String^ S_E;
		System::String^ HD_E;
		System::String^ N1_E;
		System::String^ ST_E;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setID_E(System::String^);
		void setN_E(System::String^);
		void setS_E(System::String^);
		void setHD_E(System::String^);
		void setN1_E(System::String^);
		void setST_E(System::String^);

		System::String^ getID_E(void);
		System::String^ getN_E(void);
		System::String^ getS_E(void);
		System::String^ getHD_E(void);
		System::String^ getN1_E(void);
		System::String^ getST_E(void);
	};
}
