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

	void EnterQueue();
};

