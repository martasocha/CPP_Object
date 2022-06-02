#include <iostream>
#include "Student.hpp"

int main()
{
    int size = 20;
    Student student1(size);
    std::cout << student1.setPersonalData("Jan", "Nowak") << std::endl;
    int* tabOfGrades = nullptr;
    //tabOfGrades = student1.setGrades(size);
    int newGrade = 5;
    student1.addGrade(size,newGrade);
    
    int newGrade2 = 4;
    student1.addGrade(size, newGrade2);

    int newGrade3 = 4;
    student1.addGrade(size, newGrade3);
   
    for (int i = 0; i < size; ++i)
    {
        std::cout << tabOfGrades[i] << " ";
    }
    std::cout << std::endl;
    double gradesAverage = 0;
    gradesAverage = student1.showGradeAverage(size);
    std::cout << "Average grade: " << gradesAverage << std::endl;
    //delete[]tabOfGrades;
    //tabOfGrades = nullptr;
}