#include<iostream>
using namespace std;

class Hoge {
public:
	Hoge(int n) :m_n(n) { cout << "Hoge:" << m_n << endl; }
	Hoge(const Hoge&) { cout << "Hoge&:" << m_n << endl; }
	void operator = (const Hoge&) { cout << "Hoge =:" << m_n << endl; }
	virtual ~Hoge() { cout << "~Hoge:" << m_n << endl; }

private:
	int m_n;
};

Hoge Two() {
	Hoge n(2);
	return n;
}

int main() {
	Hoge hoge(1);
	hoge = Two();
}