#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

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
		"�O�҂͌�҂�菬����",
		"���҈�v",
		"�O�҂͌�҂��傫��"
	};

	int a, b;

	cout << "���w��2���͂��Ă��������B > " << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	cout << message[Compare(a, b)] << endl;

	return true;
}

int main() {
	while (Compare()) {
		//�������Ȃ�
	}
}