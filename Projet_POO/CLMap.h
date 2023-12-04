#pragma once
ref class CLMap abstract
{
protected:
	System::String^ sSql;
public:
	virtual System::String^ Select(void)=0;
	virtual System::String^ Insert(void)=0;
	virtual System::String^ Delete(void)=0;
	virtual System::String^ Update(void)=0;
};

