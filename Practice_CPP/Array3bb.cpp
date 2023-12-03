#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;


void ShowAddress(char* pointer,int* iarray,int* i,int* pi) {
	cout << "pointer	: " << (size_t)pointer << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&pointer[" << i << "] :" << (size_t)&pointer[i] << endl;
	}

	cout << "int array" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&iArray[" << i << "] : " << (size_t)&iarray[i] << endl;
	}

	cout << "int" << endl;
	cout << i << endl;

	cout << "pointer int" << endl;
	cout << pi << endl;
}

int main() {
	char array[10];
	int iArray[10];
	int i = 3;
	int* pi = &i;


	cout << "array	:" << (size_t)array << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&array[" << i << "] : " << (size_t) & array[i] << endl;
	}

	cout << "int array" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&iArray[" << i << "] : " << (size_t) &iArray[i] << endl;
	}

	cout << "int" << endl;
	cout << &i << endl;

	cout << "pointer int" << endl;
	cout << pi << endl;

	ShowAddress(array, iArray,&i,pi);
}