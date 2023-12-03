#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;


void ShowAddress(char* pointer, int* iarray, int* i, int* pi) {
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
	int n[5];

	cout << "&n[2] = " << (size_t)&n[2] << endl
		<< "&n[2] + 1 = " << (size_t)(&n[2] + 1) << endl
		<< "&n[3] =" << (size_t)&n[3] << endl;
	
}