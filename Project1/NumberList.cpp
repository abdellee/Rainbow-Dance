#include <iostream>
#include "NUmberList.h"
using namespace std;

int main()
{
	NumberList list;

	for (int i = 0; i < 40; i++)
	{
		list.appendNode(list.getData());
	}

	list.display();

	system("pause");

	list.~NumberList();

	list.appendNode(1);
	for (int i = 0; i < 40; i++)
	{
		list.insertNode(list.getData());
	}

	//bool listNum = false;
	//int listnumber;
	//int count = 0;

	//list.appendNode(1);
	//while(count != 39)
	//{
	//	listnumber = list.getData();
	//	listNum = list.numberCheck(listnumber);
	//	if (listNum = true)
	//	{
	//		list.insertNode(listnumber);
	//		count++;
	//	}
	//}
	list.display();

	system("pause");
	return 0;
}
