#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b;

	cout << "���p������2�ӂ̒�������͂��Ă��������B > " << flush;

	cin >> a >> b;

	cout << "�Εӂ̒�����" << sqrt(a * a + b * b) << "�ł��B" << endl;
}