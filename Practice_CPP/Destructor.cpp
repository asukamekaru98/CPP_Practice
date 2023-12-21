#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

class IntArray {
public:
	//�R���X�g���N�^�A�f�X�g���N�^
	IntArray(int size);
	~IntArray();

public:
	int Get(int i);
	void Set(int i, int value);

private:
	void CheckIndex(int i);

private:
	int* m_array;
	int m_size;
};

IntArray::IntArray(int size) {
	m_array = new int[size];
	m_size = size;

	cout << "�R���X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł�" << endl;
}

IntArray::~IntArray() {
	delete[]m_array;

	cout << "�f�X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł���" << endl;
}

int IntArray::Get(int i) {
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

void IntArray::CheckIndex(int i) {
	if (0 <= i && i < m_size) {
		//�C���f�b�N�X�͐���
	}
	else {
		cout << "�C���f�b�N�X���s���ł�" << endl
			<< "�l : " << i << endl;
		exit(EXIT_FAILURE);
	}
}

void Viss(int num) {
	cout << "Viss : No." << num << endl;
}

IntArray a(10);//�z��v�f��10�ŏ��������Ă���

int main() {
	Viss(1);

	IntArray b(20);
	Viss(2);

	IntArray c(30);
	Viss(3);

	{
		IntArray d(40);
		Viss(4);
	}
	Viss(5);
}
