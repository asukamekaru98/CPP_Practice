#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <algorithm>
#include <iostream>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
public:
	IntArray();//�R���X�g���N�^

public:
	int Get(int i);
	void Set(int i, int value);

private:
	void CheckIndex(int i);

private:
	int m_array[INTARRAY_SIZE];
};

int IntArray::Get(int i) {
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

void IntArray::CheckIndex(int i) {
	if (0 <= i && i < INTARRAY_SIZE) {
		//�C���f�b�N�X�͐���
	}
	else {
		cout << "�C���f�b�N�X���s���ł�" << endl
			<< "�l : " << i << endl;
		exit(EXIT_FAILURE);
	}

}

IntArray::IntArray() {
	fill_n(m_array, INTARRAY_SIZE, 0);
}