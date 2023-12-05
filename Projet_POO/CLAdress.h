#pragma once
namespace NS_Comp_Adr {
	ref class CLAdress
	{
	private:
		System::String^ ID_CY;
		System::String^ N_V;
		System::String^ ID_SN;
		System::String^ SN;
		System::String^ ID_SNB;
		System::String^ SNB;
		System::String^ ID_PC;
		System::String^ PC;
	public:
		void setID_CY(System::String^);
		void setN_V(System::String^);
		void setID_SN(System::String^);
		void setSN(System::String^);
		void setID_SNB(System::String^);
		void setSNB(System::String^);
		void setID_PC(System::String^);
		void setPC(System::String^);

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
