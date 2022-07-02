#pragma once
#include "UniversityManagement.hpp"

class CourseList
{
	Course** courses;
	Course** resizeArray();
	void copyElements(Course** target);
	int count = 0;
	int maxStaffSize = 1;
public:
	CourseList();
	virtual ~CourseList();
	void add(Course* object);
	Course* get(int index);
	int getCount();
};
