// Samples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void passByValue(int);
void passByRef(int &num1);

int main()
{
	//// get pointer to num
	//int num = 3;
	//int *pNum = &num;
	//cout << pNum << endl;
	//// dereference to get value
	//cout << *pNum << endl;
	//// reference to num
	//int &refNum = num;
	//cout << refNum << endl;
	//// address of refNum is the same as pointer above
	//cout << &refNum << endl;

	//// passByValue test
	//int num = 3;
	//cout << "In main()" << endl;
	//cout << "Value of num is " << num << endl;
	//passByValue(num);
	//cout << "Back in main and the value of num is " << num << endl;
	//passByRef(num);
	//cout << "Back in main and the value of num is " << num << endl;

	// declare a pointer to int and allocate space for it
	// with the keyword new
	int *pInt = new int;

	// declare a pointer to double and allocate space for it
	// with the keyword new
	double * pDouble = new double;

	// store the value 3 in the memory location
	// pointed to by pInt
	*pInt = 3;

	// store the value 5.0 in the memory location
	// pointed to by pDouble
	*pDouble = 5.0;

	// release memory
	delete pInt;
	delete pDouble;


    return 0;
}

void passByValue(int num1)
{
	cout << "In passByValue()" << endl;
	cout << "Value of num1 is " << num1 << endl;

	// modify num1, won't impact num
	num1++;

	cout << "num1 is now " << num1 << endl;
}

void passByRef(int &num1)
{
	cout << "In passByRef()" << endl;
	cout << "Value of num1 is " << num1 << endl;

	// modify num1 which will now change num
	num1++;

	cout << "num1 is now " << num1 << endl;
}