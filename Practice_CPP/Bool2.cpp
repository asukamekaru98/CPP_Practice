#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

bool IsDigit(char ch) {
	return '0' <= ch && ch <= '9';
}

int main() {
	while (true) {
		char ch;
		cout << "なにか文字を入力してください > " << flush;
		cin >> ch;
		if (ch == 'Q' || ch == 'q') {
			break;
		}

		if (IsDigit(ch)) {
			cout << "数字です" << endl;
		}
	}

	cout << "おわり" << endl;
}