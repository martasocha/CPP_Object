class A {
private
	A() {};
};

class B : public A {
public:
	//B(int i) : A(i) {} // lista inicjalzuj�ca wywoluje konstruktor bazowej
};

void foo() {
	A a;
	//B b;
}