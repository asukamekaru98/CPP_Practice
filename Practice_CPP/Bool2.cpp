#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

bool IsDigit(char ch) {
	return '0' <= ch && ch <= '9';
}

int main() {
	while (true) {
		char ch;
		cout << "�Ȃɂ���������͂��Ă������� > " << flush;
		cin >> ch;
		if (ch == 'Q' || ch == 'q') {
			break;
		}

		if (IsDigit(ch)) {
			cout << "�����ł�" << endl;
		}
	}

	cout << "�����" << endl;
}