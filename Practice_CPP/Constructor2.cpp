#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

class Integer {
public:
	int m_value;

	Integer();
	Integer(int num);
	void Show();
};

//�R���X�g���N�^
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
	Integer a, b(100), c(200+);//���ꂾ���ŏ���ɃR���X�g���N�^���Ă΂��

	a.Show();
	b.Show();
	c.Show();
}