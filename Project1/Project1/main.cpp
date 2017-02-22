#include <iostream>
#include "student.h"
#include "Teacher.h"
using namespace std;

int main()
{
	Teacher james = Teacher("James");
	Teacher bob = Teacher("Bob");
	cout << james.getName() << endl;
	cout << bob.getName() << endl;

	getchar();

	return 0;
}