#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdio>
using namespace std;

void CalcMultiples(int* array, int size, int n) {
	for (int i = 0; i < size; ++i) {
		array[i] = n * (i + 1);
	}
}

void ShowArray(const int* array, int size) {
	for (int i = 0; i < size; ++i) {
		cout << array[i] << ' ';
	}

	cout << endl;
}

int main() {
	int* array;
	int size;

	cout << "�ǂ��܂Ōv�Z���܂��� > " << flush;
	cin >> size;

	array = new int[size];

	CalcMultiples(array, size, 3);
	ShowArray(array, size);

	delete[] array;
}