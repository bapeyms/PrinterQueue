#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

void Person::EnterValues()
{
	const int N = 1000;
	char buffer[N];
	cout << "Enter a name: ";
	cin.getline(buffer, N);
	name = buffer;

	cout << "Enter a text to print: ";
	cin.getline(buffer, N);
	textToPrint = buffer;
}

string Person::GetName()
{
	return name;
}

string Person::GetTextToPrint()
{
	return textToPrint;
}
