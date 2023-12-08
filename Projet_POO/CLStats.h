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
		System::Data::DataSet^ averageCart(System::String^);
		System::Data::DataSet^ monthSalesRevenue(System::String^, System::String^, System::String^);
		System::Data::DataSet^ belowThreshold(System::String^);
		System::Data::DataSet^ bestSellers(System::String^);
		System::Data::DataSet^ lessSold(System::String^);
		System::Data::DataSet^ stockCommercialValue(System::String^);
		System::Data::DataSet^ stockPurchaseValue(System::String^);
		System::Data::DataSet^ customerTotalAmount(System::String^);
		//System::Data::DataSet^ simulateStockValue(System::String^);
		System::Data::DataSet^ simulateStockValue(System::String^, System::String^, System::String^, System::String^);
	};
}
