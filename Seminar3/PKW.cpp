#include "PKW.h"
#include "Auto.h"
#include <iostream>

using namespace std;

PKW::PKW(string Echipare, int Id, string Marke, string Modell) :Auto(Id, Marke, Modell)
{
	this->Echipare= Echipare;
}

PKW::PKW()
{
	Echipare = "";
}
