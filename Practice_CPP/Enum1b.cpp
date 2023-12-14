#define _CRT_SECURE_NO_WARNINGS 1	//sprint警告を無視させる

#include <iostream>
using namespace std;

enum CompareResult {
	CR_LESS_THAN = 0,
	CR_EQUAL_TO = 1,
	CR_GREATER = 2
};

CompareResult Compare(int a, int b) {
	return
		a < b ? CR_LESS_THAN :
		a > b ? CR_GREATER :
		CR_EQUAL_TO;
}

bool Compare() {
	const char* message[] = {
		"前者は後者より小さい",
		"両者一致",
		"前者は後者より大きい"
	};

	int a, b;

	cout << "数学を2つ入力してください。 > " << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	cout << message[Compare(a, b)] << endl;

	return true;
}

int main() {
	while (Compare()) {
		//何もしない
	}
}