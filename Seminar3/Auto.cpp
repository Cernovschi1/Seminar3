#include <iostream>
#include <string>
#include "Auto.h"

Auto::Auto()
{

	id = 0;
	Marke = "";
	Modell = "";

}

Auto::Auto(int Id, string marke, string modell)
{
	id = Id;
	Marke = marke;
	Modell = modell;
}

int Auto::get_id()
{
	return this->id;
}

string Auto::get_Marke()
{
	return this->Marke;
}

string Auto::get_Modell()
{
	return this->Modell;
}

void Auto::set_id(int Id)
{
	this->id = Id;
}

void Auto::set_Marke(string marke)
{
	this->Marke = marke;
}

void Auto::set_Modell(string modell)
{
	this->Modell = modell;
}