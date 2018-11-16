#pragma once
#ifndef NumberList_H
#define NumberList_H

class NumberList
{
private:
	struct ListNode
	{
		int value;
		struct ListNode *next;
	};

	ListNode *head;

public:
	NumberList()
	{
		head = nullptr;
	}
	
	~NumberList();
	void appendNode(int);
	void insertNode(int);
	//void deleteNode(int);
	void display() const;
	bool numberCheck(int);

	int getData()
	{
		return (rand() % 100);
	}
};
#endif