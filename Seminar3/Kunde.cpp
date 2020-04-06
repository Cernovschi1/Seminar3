#include "Kunde.h"
#include <iostream>
#include <string>

using namespace std;

Kunde::Kunde()
{
	this->id = 0;
	this->name = "";
}

Kunde::Kunde(int Id, string name)
{

	this->id = Id;
	this->name = name;

}

int Kunde::get_id()
{
	return this->id;
}

string Kunde::get_name()
{
	return this->name;
}

void Kunde::set_id(int id)
{
	this->id = id;
}

void Kunde::set_name(string name)
{
	this->name = name;
}