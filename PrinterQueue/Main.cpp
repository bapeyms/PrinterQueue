#include <iostream>
#include <string>
#include "Queue.h"
#include "Person.h"
using namespace std;

enum PrinterQueue
{
	ADD_TO_PRINT = 1,
	PRINT,
	SHOW_QUEUE,
	SHOW_STAT,
	EXIT = 0
};

int MenuChoice(int menuNumber)
{
	int menuChoice;
	cout << "Enter the menu number to perform a desired action" << endl;
	cout << "Number: ";
	cin >> menuChoice;
	cin.ignore(1000, '\n');
	while (menuChoice < 0 || menuChoice > menuNumber)
	{
		cout << "Enter a number from 0 to " << menuNumber << "!" << endl;
		cout << "Number: ";
		cin >> menuChoice;
		cin.ignore(1000, '\n');
	}
	cout << endl;
	return menuChoice;
}

int main()
{
	cout << "--- PRINTER QUEUE ---" << endl << endl;
	Queue printQueue(20);
	Person firstPrs;
	firstPrs.EnterValues();
	printQueue.Add(firstPrs);
	cout << "Added!" << endl << endl;

	Queue statistic(20);

	while (true)
	{
		cout << "-- MENU --" << endl;
		cout << "1) Add to print" << endl;
		cout << "2) Print" << endl;
		cout << "3) Show the queue" << endl;
		cout << "4) Show the statistic" << endl;
		cout << "0) Exit" << endl << endl;

		int menuNumber = 4;
		int menuChoice = MenuChoice(menuNumber);

		switch (menuChoice) {
		case ADD_TO_PRINT: {
			cout << "- ADD TO PRINT -" << endl;
			Person prs;
			prs.EnterValues();
			printQueue.Add(prs);
			cout << "Added!" << endl;
			break;
		}
		case PRINT: {
			cout << "- PRINT -" << endl;
			if (!printQueue.IsEmpty())
			{
				Person printed = printQueue.Extract();
				cout << printed.GetName() << " is printing!" << endl;
				cout << "Printed!" << endl << endl;
				statistic.Add(printed);
			}
			else
			{
				cout << "Queue is empty!" << endl << endl;
			}
			break;
		}
		case SHOW_QUEUE: {
			cout << "- SHOW THE QUEUE -" << endl;
			printQueue.ShowQueue();
			break;
		}
		case SHOW_STAT: {
			cout << "- SHOW THE STATISTIC -" << endl;
			statistic.ShowQueue();
			break;
		}
		case EXIT: {
			cout << "Program is exiting! Bye!" << endl;
			return 0;
		}
		}
	}
}