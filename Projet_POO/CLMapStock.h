#pragma once
#include "CLMap.h"
namespace NS_Comp_Map_Stock
{
	ref class CLMapStock : public CLMap
	{
	private:
		System::String^ ID_A;
		System::String^ R_A;
		System::String^ N_A;
		System::String^ QS_A;
		System::String^ HT_A;
		System::String^ RT_A;
		System::String^ TVA_A;
		System::String^ D_A;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setID_A(System::String^);
		void setR_A(System::String^);
		void setN_A(System::String^);
		void setQS_A(System::String^);
		void setHT_A(System::String^);
		void setRT_A(System::String^);
		void setTVA_A(System::String^);
		void setD_A(System::String^);

		System::String^ getID_A(void);
		System::String^ getR_A(void);
		System::String^ getN_A(void);
		System::String^ getQS_A(void);
		System::String^ getHT_A(void);
		System::String^ getRT_A(void);
		System::String^ getTVA_A(void);
		System::String^ getD_A(void);
	};
}

