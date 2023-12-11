#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <algorithm>
using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {
	cout << "�A�h���X����Ɉ�肩�̃`�F�b�N" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

void CheckAddress_Sub() {
	static int	a;
	int			b;
	cout << "&a = " << (size_t)&a << endl
		<< "&b = " << (size_t)&b << endl;
}

//���̊֐��̒�����CheckAddress_Sub��ǂ񂾂Ƃ���
//�ϐ�a��b�̃A�h���X���ǂ��Ȃ邩�`�F�b�N
void CheckAddress_Sub2() {
	cout << "in Sub2" << endl;
	CheckAddress_Sub;
}

void CheckInitOnce_Sub();

void CheckInitOnce() {
	cout << endl << "��������1�񂵂�����Ȃ����̃`�F�b�N" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

void CheckInitOnce_Sub() {
	static int	a = 3;
	int			b = 3;
	cout << "a = " << a << endl
		<< "b = " << b << endl;

	++a;
	++b;
}

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit() {
	cout << endl << "0�ŏ����������̂��`�F�b�N" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

//�ÓI�ϐ������ŏ����������̂����`�F�b�N
void CheckZeroInit_Sub() {
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

//�����ϐ������ŏ����������̂����`�F�b�N
void CheckZeroInit_Sub2() {
	int a, b, c, d;
	a = b = c = d = 0;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckInvariant_Sub(int*& pa,int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {
	cout << endl << "�l���ۏ؂���邩�̃`�F�b�N" << endl;
	
	int* pa, * pb;
	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();

	cout << "*pa = " << *pa << endl
		<< "*pb = " << *pb << endl;
}

void CheckInvariant_Sub(int*& pa, int*& pb) {
	static int a = 9;
	int			b = 9;
	pa = &a;
	pb = &b;
}

void CheckInvariant_Sub2() {
	int dummy[100];
	fill_n(dummy, 100, 0);
}

int main() {
	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();
}