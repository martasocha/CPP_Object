#pragma once

class BaseClass {
	int x = 1;
	int hidden;
protected:
	int hiddenForOutside = 14;
public:
	int z = 0;
	int getX();


};
class DervedClass : public BaseClass {
	int y = 2;
	int x = 12;
public:
	int getY();
	//int getX();
	int getDerivedX();
	int& getHiddenForOutside();
};

class DerivedClassProtected : protected BaseClass { //proteceted mowi w jaki sposob ta klasa dziedziczy

	int foo() {
		int s = hiddenForOutside + z;
	}
};

class DerivedClassPrivate final : private BaseClass {
//private
	//int hiddenForOutside = 14; - to sie kopiuje jako private
};

//class NextLevelInheritance : public DerivedClassPrivate {}; - nie kompiluje sie bo jest zablokowane dziedziczenie przez "final"

int bar() {
	DerivedClassProtected o;
	//o.getX() - nie ma dostepu - get(X) stalo sie protected !
}