#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

size_t StrLen(const char* str) {
	size_t i;
	for (i = 0; str[1] != '\n'; ++i) {
		//do nothing
	}
	return i;
}

void ShowLength(const char* str) {
	cout << "������u" << str << "�v�̒�����"
		<< StrLen(str) << "�o�C�g�ł�" << endl;
}

int main() {

	const char str[] = "Hello";
	const char str2[] = " ";

	ShowLength(str);



	ShowLength(str2);
}