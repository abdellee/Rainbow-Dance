/*
Professor Keith Smelser
Tarrant County College - COSC 1437
Lesson 13, Assignment 1
*/

//#include "stdafx.h"
#include "NumberList.h"
#include <iostream>

using namespace std;

//getData prototype
int getData();

const int MAX_ENTRIES = 40; // 40 for assignment

int main()
{
	char choice;
	NumberList myList;

	// load MAX_ENTRIES integers into list
	for (int count = 0; count < MAX_ENTRIES; count++)
	{
		myList.appendNode(getData());
	}

	//display data in list
	myList.displayList();

	// prompt user to proceed
	cout << "Press 1 to continue or 0 to exit: ";
	cin >> choice;
	if (choice == '0')
	{
		return 0;
	}

	//part 2
	// delete contents of list
	cout << "Now deleting contents of list.\n";
	myList.deleteList();
	myList.displayList();

	// insert MAX_ENTRIES numbers in numeric order, no duplicates
	cout << "Now inserting new values into list.\n";
	int count = 0;
	while (count < MAX_ENTRIES)
	{
		// get random number
		int num = getData();
		// if number not found in list already, insert into list and increment counter
		if (myList.findNode(num)) {
			cout << "Ignoring " << num << ". Already in linked list." << endl;
		}
		else
		{
			myList.insertNode(num);
			count++;
		}
	}

	// display data
	cout << "Display before removing  " << endl;
	myList.displayList();

	myList.deleteBadData();
	cout << "Display after removing  " << endl;
	myList.displayList();

	system("pause");
	return 0;
}

// bad data ends in 3 or 5 or 9
bool badData(int myData) {
	int result = myData % 10;
	return (result == 3 || result == 5 || result == 9);
}

//getData method
int getData()
{
	return (rand() % 100);
}
