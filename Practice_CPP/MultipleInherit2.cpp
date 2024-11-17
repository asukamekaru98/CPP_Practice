#include<iostream>

using namespace std;

class ABase
{
public:
	virtual ~ABase() {}
	virtual void AHoge() = 0;
};

class A1 : public ABase
{
public:
	virtual void AHoge() {
		cout << "A1::AHoge()" << endl;
	}
};

class A2 : public ABase
{
public:
	virtual void AHoge() { 
		cout << "A2::AHoge()" << endl;
	}
};

class C:
	public A1,
	public A2
{
public:
	virtual void AHoge() {
		A1::AHoge();
	}
};

int main()
{
	C c;
	A1& a1 = c;
	A2& a2 = c;

	a1.AHoge();
	a2.AHoge();

	c.A1::AHoge();
	c.A2::AHoge();
}