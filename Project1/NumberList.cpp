/*
Professor Keith Smelser
Tarrant County College - COSC 1437
Lesson 13, Assignment 1
*/

// MS Visual Studio 2015 uses "stdafx.h" - 2017 uses "pch.h"
//#include "stdafx.h"
//#include "pch.h"



#include "NumberList.h"
#include <iostream>

using namespace std;

//constructor
NumberList::NumberList()
{
	head = nullptr;
}

//destructor
NumberList::~NumberList()
{
	deleteList();

}


// appendNode method
void NumberList::appendNode(int num)
{
	ListNode* newNode;
	ListNode* nodePtr;

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

// insertNode method
void NumberList::insertNode(int num)
{
	ListNode* newNode;
	ListNode* nodePtr;
	ListNode* previousNode = nullptr;

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
		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

// displayList method
void NumberList::displayList() const
{
	ListNode* nodePtr;


	if (!head)
	{
		cout << "Empty list!" << endl;
	}
	else
	{
		nodePtr = head;
		cout << "*** ";
		while (nodePtr)
		{
			cout << nodePtr->value << " ";
			nodePtr = nodePtr->next;
		}
		cout << endl;
	}
}

// deleteList
void NumberList::deleteList()
{
	ListNode* nodePtr;
	ListNode* nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
	head = nullptr;
}
void NumberList::deleteNode(double num)
{
	ListNode *nodePtr; // To traverse the list
	ListNode *previousNode = nullptr; // To point to the previous node

		// If the list is empty, do nothing.
	if (!head)
		return;

	// Determine if the first node is the one.
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Skip all nodes whose value member is
		// not equal to num.
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list,
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

// deleteList
void NumberList::deleteBadData()
{
	ListNode* nodePtr;
	ListNode* nodePtrTemp;

	if (!head)
	{
		cout << "Empty list!" << endl;
	}
	else
	{
		nodePtr = head;
		cout << "*** ";
		while (nodePtr)
		{
			cout << nodePtr->value << " ";
			if (badData(nodePtr->value))
			{
				nodePtrTemp = nodePtr->next;
				deleteNode(nodePtr->value);
				nodePtr = nodePtrTemp;
			}
			else
			{
				nodePtr = nodePtr->next;
			}
		}
		cout << endl;
	}
}

// bad data ends in 3 or 5 or 9
bool NumberList::badData(int myData) {
	int result = myData % 10;
	return (result == 3 || result == 5 || result == 9);
}
//findNode, return true if num is found
bool NumberList::findNode(int num)
{
	ListNode* nodePtr;
	nodePtr = head;

	if (nodePtr == nullptr) {
		return false;
	}

	while (nodePtr)
	{
		if (nodePtr->value == num)
		{
			return true;
		}
		else
		{
			nodePtr = nodePtr->next;
		}
	}
	return false;
}
