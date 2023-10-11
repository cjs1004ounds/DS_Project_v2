#pragma once
#include "MemberQueueNode.h"

class MemberQueue
{
private:
    MemberQueueNode* first; // Queue의 맨 앞 노드를 가리키는 포인터
    MemberQueueNode* last;  // Queue의 맨 뒤 노드를 가리키는 포인터
    int qlen; // Queue의 현재 길이

public:
    MemberQueue();
    ~MemberQueue();

    bool empty();
    bool full();
    void push(const char* name, const int age, const char* collectday, const char type);
    MemberQueueNode pop();
    MemberQueueNode front();
};