#include <iostream>
#include "StudentProfessors.hpp"

int main()
{
    Student dionizy;
    Professors professors(dionizy);

    dionizy.setProf(&professors);
    dionizy.sendEmailToProfessors();
    
}