#include <iostream>
#include "NUmberList.h"
using namespace std;

void NumberList::appendNode(int num)
{
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	if (!head)
	{
		head = newNode;
	}
	else
	{
		nodePtr = head;

		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
	}
}

void NumberList::display() const
{
	ListNode *nodePtr;

	nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->value << endl;

		nodePtr = nodePtr->next;
	}
}

NumberList::~NumberList()
{
	ListNode *nodePtr;
	ListNode *nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}

	head = nullptr;
}

void NumberList::insertNode(int num)
{
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *presviousNode = nullptr;

	newNode = new ListNode;
	newNode->value = num;

	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;

		presviousNode = nullptr;

		while (nodePtr != nullptr && nodePtr->value <= num)
		{
			presviousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (presviousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			if (presviousNode->value == num) return;
			presviousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

