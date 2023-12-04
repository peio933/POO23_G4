#pragma once
#include "CLCAD.h"
#include "CLMapStock.h"
namespace NS_Comp_Stock {
	ref class CLStock
	{
	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Comp_Map_Stock::CLMapStock^ oMapStock;
	public:
		CLStock(void);
		System::Data::DataSet^ selectArticle(System::String^, System::String^);
		void insertArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deleteArticle(System::String^, System::String^);
	};
}

