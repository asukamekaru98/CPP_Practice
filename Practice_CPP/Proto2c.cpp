#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

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
	/*	�X�^�b�N�I�[�o�[�t���[�ɂȂ�	*/
	Func1();
}

int Func1() { return Func2(); }
int Func2() { return Func3(); }
int Func3() { return Func4(); }
int Func4() { return Func5(); }
int Func5() { return Func6(); }


int Func6() {
	cout << "����J����" << endl;
	Func1();
	hoge++;

	if (hoge > 10)return 0;
}