#pragma once
#include <string>

using namespace std;

class NameBSTNode
{
private:
    string memberName;
    int age;
    string collectionDate;
    string expirationDate;
    string termsType;
    NameBSTNode* left;
    NameBSTNode* right;

public:
    NameBSTNode(const string& name, int age, const string& collectionDate, const string& expirationDate, const string& termsType) {
        memberName = name; this->age = age; this->collectionDate = collectionDate; this->expirationDate = expirationDate; this->termsType = termsType;
    }
    ~NameBSTNode() {
        
    }

    string getMemberName() {
        return memberName;
    }
    void setMemberName(const string& name) {
        memberName = name;
    }
    int getAge() {
        return age;
    }
    void setAge(int age) {
        this->age = age;
    }
    string getCollectionDate() {
        return collectionDate;
    }
    void setCollectionDate(const string& date) {
        collectionDate = date;
    }
    string getExpirationDate() {
        return expirationDate;
    }
    void setExpirationDate(const string& date) {
        expirationDate = date;
    }
    string getTermsType() {
        return termsType;
    }
    void setTermsType(const string& type) {
        termsType = type;
    }

    NameBSTNode* getLeft() {
        return left;
    }
    void setLeft(NameBSTNode* left) {
        this->left = left;
    }
    NameBSTNode* getRight() {
        return right;
    }
    void setRight(NameBSTNode* right) {
        this->right = right;
    }
};