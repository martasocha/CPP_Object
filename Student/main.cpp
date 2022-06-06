#include <iostream>
#include "Student.hpp"

int main()
{
    int size = 20;
    Student student1(size);
    std::cout << student1.setPersonalData("Jan", "Nowak") << std::endl;


    student1.addGrade(5);
    student1.addGrade(4);
    student1.addGrade(4);

    std::cout << "Average grade: " << student1.showGradeAverage(size) << std::endl;
}
