#include"stdafx.h"
#include <iostream>
using namespace std;

class Node {
public:
	Node * next;
	double data;

	Node() {
		next = nullptr;
	}
};

	
	 void printReverse(struct Node *head)
	{
		if (head == NULL)
			return;

		printReverse(head->next);
		cout << head->data << endl;
	}



