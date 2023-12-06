#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	const int KUKU_SUZE = 9;
	int kuku[KUKU_SUZE][KUKU_SUZE];

	for (int i = 1; i <= KUKU_SUZE; ++i) {
		for (int j = 1; j <= KUKU_SUZE; ++j) {
			kuku[i - 1][j - 1] = i * j;
		}
	}

	cout << "    1  2  3  4  5  6  7  8  9" << endl;
	for (int i = 1; i <= KUKU_SUZE; ++i) {
		printf(" %d ", i);
		for (int j = 1; j <= KUKU_SUZE; ++j) {
			printf("%2d ", kuku[i - 1][j - 1]);
		}
		cout << endl;
	}
}