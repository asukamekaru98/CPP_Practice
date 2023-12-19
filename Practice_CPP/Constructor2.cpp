#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

class Integer {
public:
	int m_value;

	Integer();
	Integer(int num);
	void Show();
};

//コンストラクタ
Integer::Integer() {
	m_value = 0;
}

Integer::Integer(int num) {
	m_value = num;
}


void Integer::Show() {
	cout << m_value << endl;
}

int main() {
	Integer a, b(100), c(200+);//これだけで勝手にコンストラクタが呼ばれる

	a.Show();
	b.Show();
	c.Show();
}