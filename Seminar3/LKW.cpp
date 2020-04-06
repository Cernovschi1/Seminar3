#pragma once
#include "Auto.h"
#include "LKW.h"
#include <iostream>
#include <string>

using namespace std;

LKW::LKW()
{
	Greutate = 0;
	Denumire = "";
}

LKW::LKW(int Greutate, string Denumire, int Id, string Marke, string Modell) :Auto(Id, Marke, Modell)
{
	this->Greutate = Greutate;
	this->Denumire = Denumire;
}

void LKW::Load()
{
	Greutate++;
}

void LKW::Unload()
{
	if (Greutate > 0)
		Greutate--;
	else
		cout << "Greutatea este deja 0\n";
}