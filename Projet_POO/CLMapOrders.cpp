#include "CLMapOrders.h"

System::String^ NS_Comp_Map_Orders::CLMapOrders::Select(void)
{
    return "SELECT * FROM Prosit_6;";
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Insert(void)
{
   return "INSERT INTO Prosit_6 (Nom, Prenom, Adresse, Ville, CodePostal) VALUES('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->ville + "','" + this->codepostal + "');";

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::Delete(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

void NS_Comp_Map_Orders::CLMapOrders::setID_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setR_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setDD_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setSD_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setPD_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setMOP_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setHT_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setTVA_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

void NS_Comp_Map_Orders::CLMapOrders::setTTC_O(System::String^)
{
    throw gcnew System::NotImplementedException();
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getID_O(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getR_O(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getDD_O(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getSD_O(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getPD_O(void)
{
	throw gcnew System::NotImplementedException();

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getMOP_O(void)
{
	throw gcnew System::NotImplementedException();

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getHT_O(void)
{
	throw gcnew System::NotImplementedException();

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getTVA_O(void)
{
	throw gcnew System::NotImplementedException();

}

System::String^ NS_Comp_Map_Orders::CLMapOrders::getTTC_O(void)
{
	throw gcnew System::NotImplementedException();

}


