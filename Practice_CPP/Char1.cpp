#include <iostream>
using namespace std;

void ShowCode(char ch) {
	cout << "�u" << ch << "�v�ɂӂ�ꂽ�ԍ���"
		<< (int)(unsigned char)ch << "�ł�" << endl;
}

int main()
{
	ShowCode('0');
	ShowCode('A');
}