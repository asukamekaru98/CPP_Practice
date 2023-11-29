#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice() {
	//オーバーフローしないように注意！
	int hoge = rand();

	cout << hoge << endl;

	double hogehoge = (RAND_MAX + 1.0);
	cout << hogehoge << endl;

	int piyopiyo = (int)(hoge / hogehoge);
	cout << piyopiyo << endl;

	int fugafuga = piyopiyo * 6;
	cout << fugafuga << endl;

	return fugafuga + 1;
}

int main()
{
	//for (int i = 0; i < 20; ++i) {
		cout << Dice() + Dice() << ' ';
	//}
	cout << endl;
}