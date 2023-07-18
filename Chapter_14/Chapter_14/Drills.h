
#include <iostream>

using namespace std;

class B1
{
public:
	virtual void vf() { std::cout << "B1::vf\n"; }
	void f() const { std::cout << "B1::f\n"; }
	virtual void pvf() = 0;
};

class D1 : public B1
{
public:
	void vf() override { std::cout << "D1::vf\n"; }
	void f() { std::cout << "D1::f\n"; } 
};

class D2 : public B1
{
public:
	void pvf() { std::cout << "D2::pvf\n"; }
};

class B2
{
public:
	virtual void pvf() = 0;
};

class D21 : public B2
{
public:
	void pvf() { std::cout << s << '\n'; }
	std::string s;
};

class D22 : public B2
{
public:
	void pvf() { std::cout << n << '\n'; }
	int n;
};

void f(B2& b2)
{
	b2.pvf();
}

void runDrills()
{
	/*
	// == drill 1 == //
	std::cout << "B1 class:\n";
	B1 b1;
	b1.vf();
	b1.f();
	// == drill 2 == //
	std::cout << "\nD1 class:\n";
	D1 d1;
	d1.vf();
	d1.f();
	std::cout << "\nreferenced B1 class:\n";
	// drill 3 == //
	B1& d =  d1 ;
	d.vf();
	d.f();*/
	std::cout << "\nD2 class:\n";
	// drill 6 == //
	D2 d2;
	d2.vf();
	d2.f(); 
	d2.pvf();
	std::cout << "\nD21 & D22 class:\n";
	// drill 6 == //
	D21 d21;
	d21.s = "D21 string:";
	f(d21);
	D22 d22;
	d22.n = 22;
	f(d22);

}
