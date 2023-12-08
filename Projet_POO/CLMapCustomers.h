#pragma once
#include "CLAdress.h"
#include "CLMap.h"
namespace NS_Comp_Map_Cus {
	ref class CLMapCustomers : public CLMap
	{
	private:
		System::String^ ID_C;
		System::String^ N_C;
		System::String^ S_C;
		System::String^ BD_C;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setID_C(System::String^);
		void setN_C(System::String^);
		void setS_C(System::String^);
		void setBD_C(System::String^);

		System::String^ getID_C(void);
		System::String^ getN_C(void);
		System::String^ getS_C(void);
		System::String^ getBD_C(void);
	};
}
