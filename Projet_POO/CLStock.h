#pragma once
#include "CLCAD"
#include "CLMapStock"
ref class CLStock
{
private:
	CLCAD^ oCAD;
	CLMapStock^ oMapStock;
public:
	CLStock(void);
	System::Data::DataSet^ selectArticle(System::String^);
	void insertArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void updateArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void deleteArticle(System::String^);
};

