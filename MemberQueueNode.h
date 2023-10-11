#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>

class MemberQueueNode
{
private:
	char name[20];
	int age;
	char collectday[16];
	char type;

public:
	MemberQueueNode* link;
	MemberQueueNode(const char* n, const int a, const char* c, const char t)
	{
		strcpy(name, n);
		age = a;
		strcpy(collectday, c);
		type = t;
		link = 0;
	}
	~MemberQueueNode() {}
};