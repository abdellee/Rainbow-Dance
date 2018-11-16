/*
Mohammad Abdellatif 1557564
Tarrant County College - COSC 1437- Fall 2018
Assignment 2 -  Week 9
*/

#include <iostream>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int startYear = 1, int startMonth = 1, int startDay = 1)
	{
		year = startYear;
		month = startMonth;
		day = startDay;
	}
	bool setYear(int);
	bool setMonth(int);
	bool setDay(int);

	int getYear() const
	{
		return year;
	}
	int getMonth() const
	{
		return month;
	}
	int getDay() const
	{
		return day;
	}
};

class Time
{
private:
	int hour;
	int minute;
	int second;
	char ampm;
public:
	Time()
	{
	}
	Time(int startHour, int startMinute, int startSecond)
	{
		hour = startHour;
		minute = startMinute;
	}
	bool setHour(int);
	bool setMinute(int);
	bool setSecond(int);
	bool setAmpm(char);

	int getHour() const
	{
		return hour;
	}
	int getMinute() const
	{
		return minute;
	}
	int getSecond() const
	{
		return second;
	}
	char getAmpm() const
	{
		string a = "sdfas";

		return ampm;
	}
	// this implementation is in Time class
	float virtual getMySpeed()
	{
		return 100;
	}

	float virtual getMyspeedperMin()
	{
		return 200;
	}

};



bool Date::setYear(int y)
{
	if (y >= 1900 && y <= 2100)
	{
		year = y;
		return true;
	}
	else
		return false;
}
bool Date::setMonth(int m)
{
	if (m >= 1 && m <= 12)
	{
		month = m;
		return true;
	}
	else
		return false;
}
bool Date::setDay(int d)
{
	if (d >= 1 && d <= 31)
	{
		day = d;
		return true;
	}
	else
		return false;
}
bool Time::setHour(int h)
{
	if (h >= 0 && h <= 11)
	{
		hour = h;
		return true;
	}
	else
		return false;
}
bool Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)
	{
		minute = m;
		return true;
	}
	else
		return false;
}
bool Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)
	{
		second = s;
		return true;
	}
	else
		return false;
}
bool Time::setAmpm(char a)
{
	if (a == 'a' || a == 'p')
	{
		ampm = a;
		return true;
	}
	else
		return false;
}

class myTime : Time
{
public:
	float virtual getMySpeed()
	{
		// this is in my time class
		return 200;
	}

	float getMyspeedperMin() override
	{
		return 700;
	}
};
int main()
{
	Time t;
	Date date;

	myTime tt;

	float f = t.getMySpeed();
	float ff = tt.getMySpeed();

	float f1 = t.getMyspeedperMin();
	float ff1 = tt.getMyspeedperMin();
}


///*
//Mohammad Abdellatif 1557564
//Tarrant County College - COSC 1437- Fall 2018
//Assignment 3 -  Week 8
//*/
//
//#include <iostream>
//#include <string>
//#include <istream>
//#include <fstream>
//using namespace std;
//
//const int NAME_SIZE = 20;
//const int STREET_SIZE = 30;
//const int CITY_SIZE = 20;
//const int STATE_CODE_SIZE = 3;
//
//struct Customers {
//	long customerNumber;
//	char name[NAME_SIZE];
//	char streetAddress_1[STREET_SIZE];
//	char streetAddress_2[STREET_SIZE];
//	char city[CITY_SIZE];
//	char state[STATE_CODE_SIZE];
//	int zipCode;
//	char isDeleted;
//	char newLine;
//};
//
//void getLargestCustomerNumber(int &num, fstream &file);
//void showExistingCustomerData(fstream &file);
//void deleteNumber(int &num, fstream &file);
//void unDeleteNumber(int &num, fstream &file);
//
//class Customer
//{
//private:
//	long customerNumber;
//	char name[NAME_SIZE];
//	char streetAddress_1[STREET_SIZE];
//	char streetAddress_2[STREET_SIZE];
//	char city[CITY_SIZE];
//	char state[STATE_CODE_SIZE];
//	int zipCode;
//
//public:
//	bool setCustomerNumber(long);
//	bool setName(char*);
//	bool setStreetAddress_1(char*);
//	bool setStreetAddress_2(char*);
//	bool setCity(char*);
//	bool setState(char*);
//	bool setZipCode(int);
//
//	long getCustomerNumber();
//	char* getName();
//	char* getStreetAddress_1();
//	char* getStreetAddress_2();
//	char* getCity();
//	char* getState();
//	int getZipCode();
//
//};
//
//long Customer::getCustomerNumber()
//{
//	return customerNumber;
//}
//char* Customer::getName()
//{
//	return name;
//}
//
//char* Customer::getStreetAddress_1()
//{
//	return streetAddress_1;
//}
//char* Customer::getStreetAddress_2()
//{
//	return streetAddress_2;
//}
//char* Customer::getCity()
//{
//	return city;
//}
//
//char* Customer::getState()
//{
//	return state;
//}
//
//int Customer::getZipCode()
//{
//	return zipCode;
//}
//
////*********************************************
//bool Customer::setCustomerNumber(long n)
//{
//	customerNumber = n;
//	return true;
//}
//
//bool Customer::setName(char* n)
//{
//	int len = strlen(n);
//	if (len >= NAME_SIZE)
//		return false;
//	strcpy_s(name, n);
//	return true;
//}
//bool Customer::setStreetAddress_1(char* s)
//{
//	strcpy_s(streetAddress_1, s);
//	return true;
//}
//bool Customer::setStreetAddress_2(char* s)
//{
//	strcpy_s(streetAddress_2, s);
//	return true;
//}
//// make it upper case
//bool Customer::setCity(char* s)
//{
//	strcpy_s(city, s);
//	return true;
//}
//// make it upper case
//bool Customer::setState(char* s)
//{
//	strcpy_s(state, s);
//	return true;
//}
//
//bool Customer::setZipCode(int z)
//{
//	if (z >= 0 && z <= 99999)
//	{
//		zipCode = z;
//		return true;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//
//
//	Customer cust;
//
//	cust.setCustomerNumber(100);
//	cust.setName("Emad");
//
//	bool b = cust.setZipCode(10000000);
//	if (b == false)
//	{
//		b = cust.setZipCode(200);
//	}
//
//	char name[NAME_SIZE];
//	bool input = false;
//	do {
//		cout << "Enter name: ";
//		cin.getline(name, NAME_SIZE);
//		input = cust.setName(name);
//	} while (input == false);
//
//
//	//cin >> name;
//
//
//	system("pause");
//
//	return 0;
//	//
//	//fstream customer("Customer.dat", ios::in | ios::out | ios::binary);
//	//Customers cust;
//	//int count = 1;
//	//int largestCustNumber = 0;
//	//char input;
//
//	//do
//	//{
//	//	cout << "1. Add Customer Data\n2. Show Existing Customer Data\n3. Delete Customer Data\n4. UnDelete Customer Data\nX.Exit" << endl;
//	//	cin >> input;
//	//	if (input == '1')
//	//	{
//	//		customer.open("Customer.dat", ios::in | ios::binary);
//	//		getLargestCustomerNumber(largestCustNumber, customer);
//	//		count = ++largestCustNumber;
//	//		customer.close();
//
//	//		customer.open("Customer.dat", ios::out | ios::app | ios::binary);
//	//		do
//	//		{
//	//			cust.customerNumber = count;
//	//			cout << "CustomerNumber --> " << cust.customerNumber << endl;
//	//			cout << "Please enter your information here: " << endl;
//	//			cin.ignore();
//	//			cout << "Name: ";
//	//			cin.getline(cust.name, NAME_SIZE);
//	//			/*cout << "Street Address 1: ";
//	//			cin.getline(cust.streetAddress_1, STREET_SIZE);
//	//			cout << "street Address 2 or NA: ";
//	//			cin.getline(cust.streetAddress_2, STREET_SIZE);
//	//			cout << "City: ";
//	//			cin.getline(cust.city, CITY_SIZE);
//	//			cout << "State: ";
//	//			cin >> cust.state;
//	//			cout << "ZipCode: ";
//	//			cin >> cust.zipCode;*/
//	//			cust.isDeleted = 'N';
//	//			cust.newLine = '\n';
//	//			count++;
//	//			customer.write(reinterpret_cast<char *>(&cust), sizeof(cust));
//
//	//			cout << "Do you want to enter another record?(enter Y to try again): ";
//	//			cin >> input;
//	//			/*cin.ignore();*/
//	//		} while (input == 'Y' || input == 'y');
//	//		customer.close();
//	//	}
//	//	if (input == '2')
//	//	{
//	//		customer.close();
//	//		customer.open("Customer.dat", ios::in | ios::binary);
//	//		showExistingCustomerData(customer);
//	//		customer.close();
//	//	}
//	//	if (input == '3')
//	//	{
//	//		customer.close();
//	//		int deNum;
//	//		cout << "Customer Number to delete: ";
//	//		cin >> deNum;
//	//		customer.open("Customer.dat", ios::in | ios::out | ios::binary);
//	//		deleteNumber(deNum, customer);
//	//		customer.close();
//
//	//	}
//	//	if (input == '4')
//	//	{
//	//		customer.close();
//	//		int undeNum;
//	//		cout << "Customer Number to un-delete: ";
//	//		cin >> undeNum;
//	//		customer.open("Customer.dat", ios::in |ios::out| ios::binary);
//	//		unDeleteNumber(undeNum, customer);
//	//		customer.close();
//	//	}
//
//	//} while (input != 'X' && input != 'x');
//
//	//system("pause");
//	//return 0;
//}
//
//void getLargestCustomerNumber(int &num, fstream &file)
//{
//	Customers cust;
//	file.seekg(0L, ios::beg);
//
//	if (!file)
//	{
//		num = 0;
//	}
//	else
//	{
//		file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		while (!file.eof())
//		{
//			if (cust.customerNumber > num)
//			{
//				num = cust.customerNumber;
//			}
//			file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		}
//	}
//}
//
//void showExistingCustomerData(fstream &file)
//{
//	Customers cust;
//	file.seekg(0L, ios::beg);
//	if (!file)
//	{
//		cout << "Nothing in file!" << endl;
//	}
//	else
//	{
//		file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		while (!file.eof())
//		{
//			cout << "Customer #" << cust.customerNumber << " Name: " << cust.name << " Is Deleted: " << cust.isDeleted << endl;
//			file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		}
//	}
//
//
//}
//
//void deleteNumber(int &num, fstream &file)
//{
//	Customers cust;
//	file.seekg(0L, ios::beg);
//	if (!file)
//	{
//		num = 0;
//	}
//	else
//	{
//		file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		bool flag = false;
//		while (!file.eof())
//		{
//			if (cust.customerNumber == num)
//			{
//				flag = true;
//				if (cust.isDeleted == 'Y')
//				{
//					cout << "Customer is already deleted!" << endl;
//					break;
//				}
//				else
//				{
//					long pos = file.tellg();
//					file.seekp(pos - sizeof(cust));
//					cust.isDeleted = 'Y';
//					file.write(reinterpret_cast<char *>(&cust), sizeof(cust));
//					break;
//				}
//			}
//			file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		}
//		if (flag == false)
//		{
//			cout << "Customer Number " << num << " not found to delete!" << endl;
//		}
//	}
//}
//
//void unDeleteNumber(int &num, fstream &file)
//{
//	Customers cust;
//	file.seekg(0L, ios::beg);
//	if (!file)
//	{
//		num = 0;
//	}
//	else
//	{
//		file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//
//		while (!file.eof())
//		{
//
//			if (cust.customerNumber == num)
//			{
//				if (cust.isDeleted == 'N')
//				{
//					cout << "Customer is not already deleted!" << endl;
//					break;
//				}
//				else
//				{
//					long pos = file.tellg();
//					file.seekp(pos - sizeof(cust));
//					cust.isDeleted = 'N';
//					file.write(reinterpret_cast<char *>(&cust), sizeof(cust));
//					break;
//				}
//
//			}
//			file.read(reinterpret_cast<char *>(&cust), sizeof(cust));
//		}
//		cout << "Customer Number " << num << " not found to un-delete!" << endl;
//	}
//}
//
//
//
////#include <iostream>
////#include <cstring>
////#include <string>
////#include <fstream> 
////#ifdef _MSC_VER
////#pragma warning(disable : 4996)
////#endif
////using namespace std;
////
////void checkBookText(char[]);
////void loadFullName(struct Users &user);
////
////struct Users {
////	string firstName;
////	string lastName;
////	string fullName;
////	int birthDate;
////	bool  isLeasingAutomobile;
////	float yearlySalary;
////};
////
////struct Date {
////	string year;
////	string month;
////	string day;
////};
////struct TomeofDay {
////	string hour;
////	string minute;
////};
////
////struct DateTime {
////	Date date;
////	TomeofDay time;
////};
////
////// 
////struct renter {};
////struct car {};
////struct location {};
////struct datetime {};
////struct driver {};
////struct payment {};
//////
////
////
////Date getDate();
////TomeofDay getTomeofDay();
////
////Date getDate()
////{
////	Date d;
////	return d;
////}
////TomeofDay getTomeofDay()
////{
////	TomeofDay t;
////	return t;
////}
////const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;
////struct Info
////{
////	char name[NAME_SIZE];
////	/*int age;
////	char address1[ADDR_SIZE];*/
////	//char address2[ADDR_SIZE];
////	//char phone[PHONE_SIZE];
////	char newLine;
////};
////
////void showContents(fstream &);
////int main()
////{
////	Info person; // To hold info about a person
////	char again; // To hold Y or N
////
////		// Open a file for binary output.
////	//fstream people("people.dat", ios::out | ios::binary);
////	fstream people("people.dat", ios::in | ios::out | ios::app | ios::binary);
////
////	//showContents(people);
////	//people.seekg(0L, ios::end);
////	
////	
////	do
////	{
////		// Get data about a person.
////		cout << "Enter the following data about a "
////			<< "person:\n";
////		cout << "Name: ";
////		cin.getline(person.name, NAME_SIZE);
////
////		//cout << "Age: ";
////		//cin >> person.age;
////		//person.age = 55;
////		//cin.ignore(); // Skip over the remaining newline.
////		//cout << "Address line 1: ";
////		//cin.getline(person.address1, ADDR_SIZE);
////		//cout << "Address line 2: ";
////		//cin.getline(person.address2, ADDR_SIZE);
////		//person.address2[0] = 'a';
////		//cout << "Phone: ";
////		//cin.getline(person.phone, PHONE_SIZE);
////
////		person.newLine = '\n';
////
////		// Write the contents of the person structure to the file.
////		people.write(reinterpret_cast<char *>(&person),
////			sizeof(person));
////
////		// Determine whether the user wants to write another record.
////		cout << "Do you want to enter another record? ";
////
////		cin >> again;
////		cin.ignore(); // Skip over the remaining newline.
////	} while (again == 'Y' || again == 'y');
////
////
////
////	// Close the file.
////	people.close();
////	system("pause");
////	return 0;
////
////
////
////	//struct Users user;
////
////	//Date rentdate;
////	//Date returndate;
////	//Date picloffdate;
////	//Date dropoffdate;
////	//Date examdate;
////	//Date duedatdate;
////
////	//location dro;
////	//location pick;
////
////
////	//cout << "Enter First name: ";
////	//cin >> user.firstName;
////	//cout << "Enter Last Name: ";
////	//cin >> user.lastName;
////	//cout << "Enter Birth Date: ";
////	//cin >> user.birthDate;
////	//cout << "is Leasing = ";
////	//cin >> user.isLeasingAutomobile;
////	//cout << "Enter Yearly Salary: ";
////	//cin >> user.yearlySalary;
////
////	//loadFullName(user);
////
////	//cout << "First name: " << user.firstName << endl;
////	//cout << "Last Name: " << user.lastName << endl;
////	//cout << "Full Name: " << user.fullName << endl;
////	//cout << "Birth Date: " << user.birthDate << endl;
////
////	//std::cout << std::boolalpha;
////	//cout << "is Leasing = " << user.isLeasingAutomobile << endl;
////	//cout << "Yearly Salary: " << user.yearlySalary << endl;
////
////	//system("pause");
////	//return 0;
////	//const int SIZE = 55;
////	//char input[SIZE];
////	//cout << "Enter the first number or X to exit: ";
////	//cin.getline(input, SIZE);
////
////	//while (toupper(input[0]) != 'X')
////	//{
////	//	checkBookText(input);
////	//	// Get the next number.
////	//	cout << "Enter the next number or X to exit: ";
////	//	cin.getline(input, SIZE);
////	//}
////	//system("pause");
////
////	//return 0;
////}
////void showContents(fstream &file)
////{
////	Info person;
////	while (!file.eof())
////	{
////		file.read(reinterpret_cast<char *>(&person), sizeof(person));
////		cout << person.name << endl;
////	}
////}
////void loadFullName(struct Users &user) {
////	user.fullName = user.firstName + " " + user.lastName;
////
////	for (std::string::size_type i = 0; i < user.fullName.length(); ++i)
////		user.fullName[i] = toupper(user.fullName[i]);
////}
////
////void checkBookText(char input[])
////{
////	const int SIZE = 20;
////	float myMoney;
////	myMoney = atof(input);
////
////
////	int singles = int(myMoney);
////	int cents = int(round(100.00 * (myMoney - singles)));
////	//string centsS = to_string(cents);  // string allowed for data conversion from int. Do not use to string to build the result.
////	char centsS[SIZE];
////	itoa(cents, centsS, 10);
////
////	char single[55];
////	if (singles == 1) strcpy(single, "One Dollar ");
////	if (singles == 2) strcpy(single, "Two Dollars ");
////	if (singles == 3) strcpy(single, "Three Dollars ");
////	if (singles == 4) strcpy(single, "Four Dollars ");
////	if (singles == 5) strcpy(single, "Five Dollars ");
////	if (singles == 6) strcpy(single, "Six Dollars ");
////	if (singles == 7) strcpy(single, "Seven Dollars ");
////	if (singles == 8) strcpy(single, "Eight Dollars ");
////	if (singles == 9) strcpy(single, "Nine Dollars ");
////	if (singles == 10) strcpy(single, "Ten Dollars ");
////	if (singles == 11) strcpy(single, "Eleven Dollars ");
////
////	strcat(single, " and ");
////	strcat(single, centsS);
////	strcat(single, " cents");
////	cout << single << endl;
////}
//////	char dollarAmount[33] = "11.99";
//////	
//////	const int SIZE = 33;
//////	char output[SIZE];
//////	double num;
//////
//////
//////
//////	float myMoney;
//////	cin >> myMoney;
//////
//////	int singles = int(myMoney);
//////	int cents = int(round(100.00 * (myMoney - singles)));
//////	//string centsS = to_string(cents);  // string allowed for data conversion from int. Do not use to string to build the result.
//////	char centsS[SIZE];
//////	itoa(cents, centsS, 10);
//////
//////	char single[SIZE];
//////	if (singles == 1) strcpy(single, "One Dollar ");
//////	if (singles == 2) strcpy(single, "Two Dollars ");
//////	if (singles == 3) strcpy(single, "Three Dollars ");
//////	if (singles == 4) strcpy(single, "Four Dollars ");
//////	if (singles == 5) strcpy(single, "Five Dollars ");
//////	if (singles == 6) strcpy(single, "Six Dollars ");
//////	if (singles == 7) strcpy(single, "Seven Dollars ");
//////	if (singles == 8) strcpy(single, "Eight Dollars ");
//////	if (singles == 9) strcpy(single, "Nine Dollars ");
//////	if (singles == 10) strcpy(single, "Ten Dollars ");
//////	if (singles == 11) strcpy(single, "Eleven Dollars ");
//////
//////	strcat(single, " and ");
//////	strcat(single, centsS);
//////	strcat(single, " cents" );
//////	cout << single << endl;
//////
//////	//char left[33];
//////	//char right[33];
//////	//double num;
//////	//num = atof(dollarAmount);
//////
//////	//
//////
//////	//// take the left side of the number = 12036
//////	//int ipart = (int)num;
//////	//// take the number after the decimal point   = 56454
//////	//int cents = int(round(100.00 * (num - ipart)));
//////
//////	//// convert the left side to c-string
//////	//itoa(ipart, left, 10);
//////	//// convert the right side to c-string
//////	//itoa(cents, right, 10);
//////	//int len = strlen(left);
//////
//////	//strcat(left, ".");
//////
//////	//// concatinate the strings. 
//////	//strcat(left, right);
//////	//cout << left << endl;
//////
//////	system("pause");
//////	/*int i;
//////	
//////	printf("Enter a number: ");
//////	scanf("%d", &i);
//////	
//////	printf("decimal: %s\n", buffer);
//////	itoa(i, buffer, 16);
//////	printf("hexadecimal: %s\n", buffer);
//////	itoa(i, buffer, 2);
//////	printf("binary: %s\n", buffer);*/
//////	return 0;
//////
//////}