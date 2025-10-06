#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Queue
{
	Person* arr;
	int maxCount;
	int count;
public:
	Queue(int max);
	Queue(const Queue& obj);
	Queue& operator=(const Queue& obj);
	~Queue();

	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Add(Person obj);
	Person Extract();

	void ShowQueue();
};

