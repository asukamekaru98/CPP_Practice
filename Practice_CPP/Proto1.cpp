#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y);	//�֐��Ղ�Ƃ�����

int main()
{
	cout << "f(1,2) = " << f(1, 2) << endl;
	cout << "f(182,144) = " << f(182, 144) << endl;
}

int f(int x, int y) {
	return 2 * x + y;
}