#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

size_t StrLen(char* str) {
	char* p;
	for (p = str; *p != '\0'; ++p) {

	}
	return p - str;
}



void ShowLength(char* str) {
	cout << "������u" << str << "�v�̒�����"
		<< StrLen(str) << "�o�C�g�ł�" << endl;
}

int main() {
	ShowLength((char*)"Hello");
	ShowLength((char*)"");
}