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


/*Person Queue::Extract()
{
	if (!IsFull())
	{
		Person temp = arr[0];
		for (int i = 1; i < count; i++)
		{
			arr[i - 1] = arr[i];
		}
		count--;
		return temp;
	}
}*/

void Queue::Clear()
{
	count = 0;
}

bool Queue::IsEmpty()
{
	return count == 0;
}

bool Queue::IsFull()
{
	return count == maxCount;
}

int Queue::GetCount()
{
	return count;
}

/*void Queue::Add(string person)
{
	if (!IsFull())
	{
		arr[count++] = person;
	}
}*/


void Queue::EnterQueue()
{
	
}
