#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

class Integer {
public:
	int m_value;

	Integer();
	void Show();
};

//�R���X�g���N�^
Integer::Integer() {
	m_value = 0;
}

void Integer::Show() {
	cout << m_value << endl;
}

int main() {
	Integer a, b, c;//���ꂾ���ŏ���ɃR���X�g���N�^���Ă΂��

	a.Show();
	b.Show();
	c.Show();
}