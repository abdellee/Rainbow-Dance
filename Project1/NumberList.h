/*
Professor Keith Smelser
Tarrant County College - COSC 1437
Lesson 13, Assignment 1
*/

#ifndef NUMBERLIST_H
#define NUMBERLIST_H


class NumberList
{
private:
	struct ListNode
	{
		int value;
		struct ListNode* next;
	};
	ListNode* head;
public:
	// constructor
	NumberList();
	
	//destructor
	~NumberList();

	// list operations
	void appendNode(int);
	void insertNode(int);
	void displayList() const;
	void deleteList();
	void deleteNode(double);
	void deleteBadData();
	bool findNode(int);
	bool badData(int);
};
#endif // !NUMBERLIST_H
