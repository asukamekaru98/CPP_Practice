#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

bool IsDigit(char ch) {
	return '0' <= ch && ch <= '9';
}

int main() {
	while (true) {
		char ch;
		cout << "‚È‚É‚©•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
		cin >> ch;
		if (ch == 'Q' || ch == 'q') {
			break;
		}

		if (IsDigit(ch)) {
			cout << "”š‚Å‚·" << endl;
		}
	}

	cout << "‚¨‚í‚è" << endl;
}