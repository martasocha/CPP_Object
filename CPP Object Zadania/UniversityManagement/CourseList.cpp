#include "CourseList.hpp"

void CourseList::add(Course* object)
{
	if (count == maxStaffSize)
	{
		Course** newCourses = resizeArray(); // tworzymy nowa 2-krotnie szersza tablice
		copyElements(newCourses); // kopiujemy elementy pomiedzy tablicami
		delete[] courses; // usuwamy stara tablice		
		courses = newCourses; // zapamietujemy nowa tablice - podobnie do //staff = nullptr;
	}
	courses[count] = object;
	++count;
}

Course* CourseList::get(int index)
{
	return courses[index];
}

int CourseList::getCount()
{
	return count;
}

//tworzymy nowa tablice
//aktualizujemy maxsize
//zwracamy ja
Course** CourseList::resizeArray()
{
	maxStaffSize *= 2;
	Course** newArray = new Course * [maxStaffSize];
	return newArray;
}

//przepisujemy wszystkie elementy (count)
//miedzy staff->target
void CourseList::copyElements(Course** target)
{
	for (int i = 0; i < count; i++)
	{
		target[i] = courses[i];
	}
}

CourseList::CourseList()
{
	courses = new Course * [maxStaffSize];
}

CourseList::~CourseList()
{
	delete[] courses;
}
