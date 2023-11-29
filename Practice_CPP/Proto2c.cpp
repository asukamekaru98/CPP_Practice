#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

int hoge;

int Func1();
int Func2();
int Func3();
int Func4();
int Func5();
int Func6();

int main()
{
	/*	スタックオーバーフローになる	*/
	Func1();
}

int Func1() { return Func2(); }
int Func2() { return Func3(); }
int Func3() { return Func4(); }
int Func4() { return Func5(); }
int Func5() { return Func6(); }


int Func6() {
	cout << "ご苦労さん" << endl;
	Func1();
	hoge++;

	if (hoge > 10)return 0;
}