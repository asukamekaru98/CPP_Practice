#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

void Init(int ii) {
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		ii = i * 5;
	}
}

void Show(const int ii) {
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		cout << ii << ' ';
	}
	cout << endl;
}

int main() {
	int n = 0;

	Init(n);
	Show(n);
}