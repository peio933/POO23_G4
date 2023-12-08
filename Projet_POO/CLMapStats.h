#pragma once
namespace NS_Comp_Map_Stats {
	ref class CLMapStats
	{
	private:
		System::String^ TVA;
		System::String^ MargeCommerciale;
		System::String^ DemarqueInconnue;
		System::String^ MonthSalesRevenue;
		System::String^ YearSalesRevenue;

	public:
		System::String^ AverageTTC_O(void);
		System::String^ SumTTC_O(void);
		System::String^ SelectBestSellers(void);
		System::String^ SelectbelowThreshold(void);
		System::String^ SelectLessSold(void);
		System::String^ QueryStockCommercialValue(void);
		System::String^ QueryStockPurchaseValue(void);
		System::String^ SumTTC_O_C(void);
		System::String^ simulateStockValue(void);

		void setTVA(System::String^);
		void setMargeCommerciale(System::String^);
		void setDemarqueInconnue(System::String^);
		void setMonthSalesRevenue(System::String^);
		void setYearSalesRevenue(System::String^);

		System::String^ getTVA(void);
		System::String^ getMargeCommerciale(void);
		System::String^ getDemarqueInconnue(void);
		System::String^ getMonthSalesRevenue(void);
		System::String^ getYearSalesRevenue(void);
	};
}

