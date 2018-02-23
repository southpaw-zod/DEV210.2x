// Mod3Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"


int main()
{
	Student *student = new Student("John", "Doe", 21, "555-555-5555");
	Teacher *teacher = new Teacher("Alan", "Turing", 105, "+44 5555 123456");
	student->OutputIdentity();
	student->OutputAge();
	teacher->OutputIdentity();
	teacher->OutputAge();
    return 0;
}

