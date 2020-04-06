#pragma once
#include <string>
#include <iostream>
#include "Auto.h"

using namespace std;

class LKW : public Auto
{
private:
	int Greutate;
	string Denumire;
public:

	LKW();
	LKW(int Greutate, string Denumire, int Id, string Marke, string Modell);
	int get_Greutate() { return Greutate; }
	void Load();
	void Unload();

};
