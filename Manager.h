#pragma once
#include "MemberQueue.h"
#include "TermsList.h"
#include "TermsBST.h"
#include "NameBST.h"
#include <fstream>
using namespace std;

class Manager
{
private:

	ifstream fcmd;
	ofstream flog;
	MemberQueue memberQueue;
	TermsLIST termsList;
	TermsBST termsBST;
	NameBST nameBST;


public:
	Manager();
	~Manager();

	void run(const char* command);
	
	void PrintSuccess(const char* cmd);
	void PrintErrorCode(int num);

	void LOAD();
	void ADD(const char* string);
	void QPOP();
	void SEARCH();
	void PRINT();
	void DELETE();
};
