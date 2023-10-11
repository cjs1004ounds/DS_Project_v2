#pragma once
#include "TermsBST.h"

using namespace std;

class TermsListNode
{
private:
    string type;
    int memberCount;
    TermsBST* bst;

    TermsListNode* next;

public:
    TermsListNode(const string& type, int count, TermsBST* bst) {
        this->type = type; memberCount = count; this->bst = bst;
    }
    ~TermsListNode() {

    }

    string getType() {
        return type;
    }
    int getMemberCount() {
        return memberCount;
    }
    TermsBST* getBST() {
        return bst;
    }

    void setType(const string& type) {
        this->type = type;
    }
    void setMemberCount(int count) {
        memberCount = count;
    }
    void setBST(TermsBST* bst) {
        this->bst = bst;
    }

    TermsListNode* getNext() {
        return next;
    }
    void setNext(TermsListNode* next) {
        this->next = next;
    }
};