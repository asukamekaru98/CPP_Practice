#define _CRT_SECURE_NO_WARNINGS 1	//sprintxð³³¹é

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

void Init(int array[]) {
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		array[i] = i * 5;
	}
}

void Show(const int array[]) {
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[ARRAY_SIZE];

	Init(n);
	Show(n);
}