#include "Student.h"
using namespace std;


Student::Student(string name)
{
	_name = name;
}


Student::~Student()
{
}

std::string Student::getName()
{
	return _name;
}
