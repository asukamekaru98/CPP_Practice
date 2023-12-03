#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

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
	cout << "文字列「" << str << "」の長さは"
		<< StrLen(str) << "バイトです" << endl;
}

int main() {

	const char str[] = "Hello";
	const char str2[] = " ";

	ShowLength(str);



	ShowLength(str2);
}