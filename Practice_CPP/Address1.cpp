#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

void Foo() {
	int a;
	char b[10];


	//&でアドレス値を見る
	cout << "a		:" << (size_t)&a << endl
		<< "b		:" << (size_t)b << endl
		<< "Foo		:" << (size_t)Foo << endl;
}

int main() {
	Foo();
}