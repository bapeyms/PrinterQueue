#include "Queue.h"
#include "Person.h"
#include <iostream>
using namespace std;

Queue::Queue(int max)
{
	maxCount = max;
	arr = new Person[maxCount];
	count = 0;
}

Queue::Queue(const Queue& obj)
{
	maxCount = obj.maxCount;
	count = obj.count;
	arr = new Person[obj.maxCount];
	for (int i = 0; i < maxCount; i++)
	{
		arr[i] = obj.arr[i];
	}
}

Queue& Queue::operator=(const Queue& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (arr != nullptr)
	{
		delete[] arr;
	}
	arr = new Person[obj.maxCount];
	for (int i = 0; i < maxCount; i++)
	{
		arr[i] = obj.arr[i];
	}
	maxCount = obj.maxCount;
	count = obj.count;

	return *this;
}

Queue::~Queue()
{
	delete[] arr;
}

void Queue::EnterQueue()
{

}
