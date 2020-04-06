#pragma once
#include <string>

using namespace std;

class Kunde
{
private:

	int id;
	string name;

public:

	Kunde();
	Kunde(int id, string name);
	//Getters
	int get_id();
	string get_name();
	//Setters
	void set_id(int ID);
	void set_name(string NAME);
};