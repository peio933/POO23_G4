#pragma once
#include"CLMapStats.h"
#include "CLCAD.h"

namespace NS_Comp_Stats {
	ref class CLStats
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Stats::CLMapStats^ oMapStats;
	public:
		CLStats(void);
		void averageCart(System::String^);
		void monthSalesRevenue(System::String^, System::String^, System::String^);
		void belowThreshold(System::String^);
		void bestSellers(System::String^);
		void lessSold(System::String^);
		void stockCommercialValue(System::String^);
		void stockPurchaseValue(System::String^);
		void customerTotalAmount(System::String^);
		void simulateStockValue(System::String^, System::String^, System::String^);
	};
}
