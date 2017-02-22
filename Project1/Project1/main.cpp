#include <iostream>
#include "student.h"
#include "Teacher.h"
#include "Courses.h"
using namespace std;

int main()
{
	Teacher james = Teacher("James");
	Courses cis17 = Courses("CIS17A", "Programming C++ Objects", james);
	Student bob = Student("bob");
	Student jane = Student("jane");

	cis17.enrollStudent(bob, 0);
	cis17.enrollStudent(jane, 1);

	cout << cis17.getClassInfo() << endl;

	getchar();

	return 0;
}