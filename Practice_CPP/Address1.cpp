#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

void Foo() {
	int a;
	char b[10];


	//&�ŃA�h���X�l������
	cout << "a		:" << (size_t)&a << endl
		<< "b		:" << (size_t)b << endl
		<< "Foo		:" << (size_t)Foo << endl;
}

int main() {
	Foo();
}