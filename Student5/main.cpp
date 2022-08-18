#include "Student5.hpp"
#include <iostream>

/// Agregacja

int main()
{

    Adress adress_1("Krolewska", 5);
    Student janNowak(adress_1);
    Professor adamKowalski(adress_1);

    std::cout << "Jan Nowak mieszka pod adresem: " << adress_1.getStreet() << " " << adress_1.getHouseNo() << std::endl;

    adress_1.setHouseNo(7);
    adress_1.setStreet("Kazimierza Wielkiego");
    std::cout << "Jan Nowak mieszka pod adresem: " << adress_1.getStreet() << " " << adress_1.getHouseNo() << std::endl;

}
