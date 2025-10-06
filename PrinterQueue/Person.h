#pragma once
#include <string>
using namespace std;

class Person
{
	string name;
	string textToPrint;
public:
	Person() {};
	void EnterValues();
	string GetName();
	string GetTextToPrint();
};

