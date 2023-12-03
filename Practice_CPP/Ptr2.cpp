#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

int main() {
	int a;
	int* p = &a;

	a = 0;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;

	*p = 5;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;
}