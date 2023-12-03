#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

size_t StrLen(char* str) {
	char* p;
	for (p = str; *p != '\0'; ++p) {

	}
	return p - str;
}



void ShowLength(char* str) {
	cout << "文字列「" << str << "」の長さは"
		<< StrLen(str) << "バイトです" << endl;
}

int main() {
	ShowLength((char*)"Hello");
	ShowLength((char*)"");
}