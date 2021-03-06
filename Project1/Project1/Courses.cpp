#include "Courses.h"
#include <string>
using namespace std;


Courses::Courses(string name, string description, Teacher teacher) : _name(name), _description(description), _teacher(teacher)
{
}


Courses::~Courses()
{
}

bool Courses::enrollStudent(Student newStudent, int position)
{
	if (position <= 9 && _student[position].getName() == "Null")
	{
		_student[position] = newStudent;
		return true;
	}
	return false;
}

string Courses::getClassInfo()
{
	string info = "Course Information for " + _name + "\n";
	info += _description;
	info += "\n------------------------------";
	info += "\n";
	for (auto student : _student)
	{
		if (student.getName()!="Null")
		{
			info += student.getName() + "\n";
		}
		
	}
	return info;
}
