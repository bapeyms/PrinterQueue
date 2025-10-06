#include "Queue.h"
#include <iostream>
#include <string>
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
	maxCount = obj.maxCount;
	count = obj.count;
	arr = new Person[obj.maxCount];
	for (int i = 0; i < maxCount; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}
Queue::~Queue()
{
	delete[] arr;
}

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

void Queue::Add(Person obj)
{
	if (!IsFull())
	{
		arr[count++] = obj;
	}
}

Person Queue::Extract()
{
	if (!IsEmpty())
	{
		Person temp = arr[0];
		for (int i = 1; i < count; i++)
		{
			arr[i - 1] = arr[i];
		}
		count--;
		return temp;
	}
	else
	{
		cout << "Method cannot be used! Queue is empty!" << endl;
		return Person();
	}
}

void Queue::ShowQueue()
{
	if (IsEmpty())
	{
		cout << "Method cannot be used! Queue is empty!" << endl << endl;
		return;
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			cout << "Person #" << i + 1 << endl;
			cout << "Name: " << arr[i].GetName() << endl;
			cout << "Text to print: " << arr[i].GetTextToPrint() << endl << endl;
		}
	}
}

