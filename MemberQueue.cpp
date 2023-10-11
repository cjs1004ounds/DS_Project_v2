#include "MemberQueue.h"

MemberQueue::MemberQueue()
{
	first = 0;
	last = 0;
	qlen = 0;
}
MemberQueue::~MemberQueue()
{
	MemberQueueNode* next = 0;

	while (first != 0)
	{
		next = first->link;
		delete first;
		first = next;
	}
}

bool MemberQueue::empty()
{
	return first == 0;
}
bool MemberQueue::full()
{
	return qlen == 100;
}
void MemberQueue::push(const char* name, const int age, const char* collectday, const char type)
{
	if (full())
		throw 100;
	else if (empty())
	{
		first = last = new MemberQueueNode(name, age, collectday, type);
		qlen++;
	}
	else
	{
		last = last->link = new MemberQueueNode(name, age, collectday, type);
		qlen++;
	}
}
MemberQueueNode MemberQueue::pop() {
	MemberQueueNode* front = first;

	if (empty())
		exit(-1);
	else {
		first = front->link;
		delete front;
		qlen--;
	}
}
MemberQueueNode MemberQueue::front()
{
	if (empty())
		exit(-1);
	return *first;
}