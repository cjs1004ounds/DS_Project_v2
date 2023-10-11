#pragma once
#include "MemberQueueNode.h"

class MemberQueue
{
private:
    MemberQueueNode* first; // Queue�� �� �� ��带 ����Ű�� ������
    MemberQueueNode* last;  // Queue�� �� �� ��带 ����Ű�� ������
    int qlen; // Queue�� ���� ����

public:
    MemberQueue();
    ~MemberQueue();

    bool empty();
    bool full();
    void push(const char* name, const int age, const char* collectday, const char type);
    MemberQueueNode pop();
    MemberQueueNode front();
};