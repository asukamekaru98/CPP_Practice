#include"IntArray.h"
#include<iostream>

void Show(const IntArray& array) {
	cout << array.Size() << endl;
}

int main() {
	Show(5);
}