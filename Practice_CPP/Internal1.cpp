#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

static int a = 2;

static void Func1() {
	cout << "a(1) = " << a << endl;
}

void Func2() {
	Func1();
}