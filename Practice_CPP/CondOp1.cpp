#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "2�l����͂��Ă��������B > " << flush;
	cin >> a >> b;

	cout << "�傫�����̒l�� " << (a > b ? a:b) << "�ł��B" << endl;
	
}