#include "Queue.h"
#include "Person.h"
#include <iostream>
using namespace std;

void Person::EnterName()
{
	const int N = 50;
	char buffer[N];
	cout << "Enter a name: ";
	cin.getline(buffer, N);

	name = buffer;
}
