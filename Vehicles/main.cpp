#include "Vehicles.hpp"


int main()
{
	//Vehicle1 v; // nie powinno sie kompilowac
	Vehicle1* v = new Bus();
	v->drive();
	delete v;

}