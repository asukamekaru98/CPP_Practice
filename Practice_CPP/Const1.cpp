#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

int StrCout(const char* str, char ch) {
	int num = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == ch) {
			++num;
		}
	}
	return num;
}

int main() {
	char path[] = "/home/robert/document/const.txt";

	cout << "�t�@�C��" << path << "��" << StrCout(path, '/')
		<< "�d�̃t�H���_�̒��ɓ����Ă��܂��B" << endl;
}