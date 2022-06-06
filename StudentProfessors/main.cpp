#include <iostream>
#include "StudentProfessors.hpp"

int main()
{
    Student dionizy;
    Professors professors(dionizy);
   // std::string name[] = {"Jan", "Andrzej","Anna","Karolina","Monika"};
    //professors.setNames(name);

    dionizy.setProf(&professors);
    dionizy.sendEmailToProfessors();
    
}