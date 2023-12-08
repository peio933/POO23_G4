#pragma once
#include "CLMap.h"

namespace NS_Comp_Map_Orders {
	public ref class CLMapOrders
	{
	private:
		System::String^ sSql;
		System::String^ R_O;
		System::String^ DD_O;
		System::String^ SD_O;
		System::String^ MOP_O;
		System::String^ N_C;
		System::String^ S_C;
	public:
		System::String^ SelectAll(void);
		System::String^ SelectName(void);
		System::String^ SelectSurname(void);
		System::String^ SelectAdress(void);
		System::String^ SelectCity(void);
		System::String^ SelectHT(void);
		System::String^ SelectTVA(void);
		System::String^ SelectTTC(void);
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;

		void setR_O(System::String^);
		void setDD_O(System::String^);
		void setSD_O(System::String^);
		void setMOP_O(System::String^);
		void setN_C(System::String^);
		void setS_C(System::String^);

		System::String^ getR_O(void);
		System::String^ getDD_O(void);
		System::String^ getSD_O(void);
		System::String^ getMOP_O(void);
		System::String^ getN_C(void);
		System::String^ getS_C(void);
	};
}

