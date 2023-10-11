#pragma once
#include <string>
using namespace std;

class TermsBSTNode
{
private:
    string memberName;
    int age;
    string collectionDate;
    string expirationDate;

    TermsBSTNode* left;
    TermsBSTNode* right;

public:
    TermsBSTNode(const string& name, int age, const string& collectionDate, const string& expirationDate) {
        memberName = name; this->age = age; this->collectionDate = collectionDate; this->expirationDate = expirationDate;
    }
    ~TermsBSTNode() {

    }

    string getMemberName() {
        return memberName;
    }
    int getAge() {
        return age;
    }
    string getCollectionDate() {
        return collectionDate;
    }
    string getExpirationDate() {
        return expirationDate;
    }

    TermsBSTNode* getLeft() {
        return left;
    }
    TermsBSTNode* getRight() {
        return right;
    }

    void setMemberName(const string& name) {
        memberName = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setCollectionDate(const string& collectionDate) {
        this->collectionDate = collectionDate;
    }
    void setExpirationDate(const string& expirationDate) {
        this->expirationDate = expirationDate;
    }

    void setLeft(TermsBSTNode* left) {
        this->left = left;
    }
    void setRight(TermsBSTNode* right) {
        this->right = right;
    }
};