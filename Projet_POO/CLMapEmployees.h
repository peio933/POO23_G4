#pragma once
#include "CLMap.h"

namespace NS_Comp_Map_Employees
{
	ref class CLMapEmployees : public CLMap
	{
	private:

		System::String^ ID_E;
		System::String^ N_E;
		System::String^ S_E;
		System::String^ HD_E;
		System::String^ N1_E;
		System::String^  ST_E;

		//adresse de l'employé
		System::String^ ID_CY;
		System::String^ N_V;
		System::String^ ID_SN;
		System::String^ SN;
		System::String^ ID_SNB;
		System::String^ SNB;
		System::String^ ID_PC;
		System::String^ PC;

	public:
		System::String^ SelectAll(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setID_E(System::String^);
		void setN_E(System::String^);
		void setS_E(System::String^);
		void setHD_E(System::String^);
		void setN1_E(System::String^);
		void setST_E(System::String^);

		//adresse de l'employé
		void setID_CY(System::String^);
		void setN_V(System::String^);
		void setID_SN(System::String^);
		void setSN(System::String^);
		void setID_SNB(System::String^);
		void setSNB(System::String^);
		void setID_PC(System::String^);
		void setPC(System::String^);

		System::String^ getID_E(void);
		System::String^ getN_E(void);
		System::String^ getS_E(void);
		System::String^ getHD_E(void);
		System::String^ getN1_E(void);
		System::String^ getST_E(void);

		//adresse de l'employé
		System::String^ getID_CY(void);
		System::String^ getN_V(void);
		System::String^ getID_SN(void);
		System::String^ getSN(void);
		System::String^ getID_SNB(void);
		System::String^ getSNB(void);
		System::String^ getID_PC(void);
		System::String^ getPC(void);


	};
}
