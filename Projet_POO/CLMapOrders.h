#pragma once

namespace NS_Comp_Map_Orders {
	ref class CLMapOrders
	{
	private:
		System::String^ sSql;
		System::String^ ID_O;
		System::String^ R_O;
		System::String^ DD_O;
		System::String^ SD_O;
		System::String^ PD_O;
		System::String^ MOP_O;
		System::String^ HT_O;
		System::String^ TVA_O;
		System::String^ TTC_O;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setID_O(System::String^);
		void setR_O(System::String^);
		void setDD_O(System::String^);
		void setSD_O(System::String^);
		void setPD_O(System::String^);
		void setMOP_O(System::String^);
		void setHT_O(System::String^);
		void setTVA_O(System::String^);
		void setTTC_O(System::String^);
		System::String^ getID_O(void);
		System::String^ getR_O(void);
		System::String^ getDD_O(void);
		System::String^ getSD_O(void);
		System::String^ getPD_O(void);
		System::String^ getMOP_O(void);
		System::String^ getHT_O(void);
		System::String^ getTVA_O(void);
		System::String^ getTTC_O(void);
	};
}

