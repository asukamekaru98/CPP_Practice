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
{
	public:
		virtual void AHoge() {
			cout << "C::AHoge" << endl;
			//A1::AHoge();
			//A2::AHoge();
		}
};

int main()
{
	C c;
	//ABase& a = c;

	c.AHoge();
}