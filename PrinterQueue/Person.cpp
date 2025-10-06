#include "Queue.h"
#include "Person.h"
#include <iostream>
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
