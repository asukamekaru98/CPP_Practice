#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

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

	cout << "ファイル" << path << "は" << StrCout(path, '/')
		<< "重のフォルダの中に入っています。" << endl;
}