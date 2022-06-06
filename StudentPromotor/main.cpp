#include <iostream>
#include "StudentPromotor.hpp"


int main()
{
    Student dionizy;
    Promotor promotor(&dionizy);

    dionizy.setPromotor(&promotor);
    dionizy.sendEmailToPromotor();
    promotor.sendEmailToStudent();
}
