#include <iostream>
#include "StudentPromotor.hpp"


int main()
{
    Student1 dionizy(1988);
    std::cout << dionizy.getBirthYear() << std::endl;
    Promotor promotor(&dionizy);

    dionizy.setPromotor(&promotor);
    dionizy.sendEmailToPromotor();
    promotor.sendEmailToStudent();
    std::cout << dionizy.getBirthYear() << std::endl;
}
