#pragma once
#include "CLMap.h"
namespace NS_Comp_Map_Cus {
	ref class CLMapCustomers : public CLMap
	{
	private:
		System::String^ S_C;
		System::String^ N_C;
		System::String^ BD_C;


		//adresse client
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

		void setS_C(System::String^);
		void setN_C(System::String^);
		void setBD_C(System::String^);


		//adresse client
		void setID_CY(System::String^);
		void setN_V(System::String^);
		void setID_SN(System::String^);
		void setSN(System::String^);
		void setID_SNB(System::String^);
		void setSNB(System::String^);
		void setID_PC(System::String^);
		void setPC(System::String^);

		System::String^ getS_C(void);
		System::String^ getN_C(void);
		System::String^ getBD_C(void);


		//adresse
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
