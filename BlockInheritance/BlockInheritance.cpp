class A {
private
	A() {};
};

class B : public A {
public:
	//B(int i) : A(i) {} // lista inicjalzuj¹ca wywoluje konstruktor bazowej
};

void foo() {
	A a;
	//B b;
}