#pragma once
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

	//Person Extract();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	//void Add(string person);

	void EnterQueue();
};

