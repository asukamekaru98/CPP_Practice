#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
#include <algorithm>
using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {
	cout << "アドレスが常に一定かのチェック" << endl;

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

//この関数の中からCheckAddress_Subを読んだときに
//変数aとbのアドレスがどうなるかチェック
void CheckAddress_Sub2() {
	cout << "in Sub2" << endl;
	CheckAddress_Sub;
}

void CheckInitOnce_Sub();

void CheckInitOnce() {
	cout << endl << "初期化が1回しかされないかのチェック" << endl;

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
	cout << endl << "0で初期化されるのかチェック" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

//静的変数が何で初期化されるのかをチェック
void CheckZeroInit_Sub() {
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

//自動変数が何で初期化されるのかをチェック
void CheckZeroInit_Sub2() {
	int a, b, c, d;
	a = b = c = d = 0;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckInvariant_Sub(int*& pa,int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {
	cout << endl << "値が保証されるかのチェック" << endl;
	
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