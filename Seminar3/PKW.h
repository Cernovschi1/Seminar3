#pragma once
#include "Auto.h"
#include <iostream>
#include <string>

using namespace std;

class PKW :public Auto
{
private:

	string Echipare;

public:

	PKW();
	PKW(string Echipare, int Id, string Marke, string Modell);

};