#include <iostream>

using namespace std;


class ABase
{
public:
	ABase() : m_x(0) {}
	virtual ~ABase() {}
	void Set(int x) { m_x = x; }

protected:
	int m_x;

};

class A1 : public ABase {};
class A2 : public ABase {};

class C :
	public A1,
	public A2
{};

int main()
{
	C c;
	//c.AHoge();
}