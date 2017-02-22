#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"

class Courses
{
private:
	std::string _name;
	std::string _description;
	Student _student[10];
	Teacher _teacher;

public:
	Courses(std::string name, std::string description, Teacher teacher);
	~Courses();

	bool enrollStudent(Student newStudent,int position);


};

