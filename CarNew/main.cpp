#include <iostream>
#include "CarNew.hpp"

int main()
{

	Car audi(Mark::audi);
	Car renault(Mark::renault);
	Car nissan(Mark::nissan);
	Car audi2(Mark::audi);
	std::cout << "Liczba wyprodukowanych samochodow: " << Car::getCount() << std::endl;
	std::cout << "Z jakim numerem wyprodukowano nissana: " << nissan.getNumber();

}
