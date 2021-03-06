// PointersLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void PassByValue(int n);
void PassByRef(int &n);

class Person
{
private:
	string name;
	int age;
	double height, weight;

public:
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	double getHeight() { return height; }
	void setHeight(double height) { this->height = height; }
	double getWeight() { return weight; }
	void setWeight(double weight) { this->weight = weight; }
};

void ModifyPerson(Person &person);

int main()
{
	int num1, num2;
	int *pNum = &num2;
	num1 = 3;
	*pNum = 5;
	PassByValue(num1);
	cout << "In main, num1 = " << num1 << endl;
	PassByRef(*pNum);
	cout << "In main, pNnum = " << *pNum << endl;
	PassByValue(*pNum);
	cout << "In main, pNnum = " << *pNum << endl;

	double *pDoubNum = new double;
	*pDoubNum = 5;
	cout << "pDoubNum = " << *pDoubNum << endl;
	delete pDoubNum;
	// line below would cause crash
	// cout << "pDoubNum = " << *pDoubNum << endl;


	Person *p = new Person();
	p->setName("John Doe");
	p->setAge(25);
	p->setHeight(5.5);
	p->setWeight(150);
	cout << p->getName() << " is " << p->getAge() << " years old, " << p->getHeight() << " feet tall and weighs " << p->getWeight() << " pounds." << endl;
	ModifyPerson(*p);
	cout << p->getName() << " is " << p->getAge() << " years old, " << p->getHeight() << " feet tall and weighs " << p->getWeight() << " pounds." << endl;

    return 0;
}

void PassByValue(int n)
{
	cout << "In PassByValue, n = " << n << endl;
	n = 25;
	cout << "In PassByValue, n = " << n << endl;
}

void PassByRef(int &n)
{
	cout << "In PassByRef, n = " << n << endl;
	n = 50;
	cout << "In PassByRef, n = " << n << endl;
}

void ModifyPerson(Person &person)
{
	person.setName("Jane Doe");
}