#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

int a = 1;

int main() {
	cout << a << ":" << (size_t)&a << endl;

	int a = 2;
	cout << a << ":" << (size_t)&a << endl;

	{
		int a = 3;
		cout << a << ":" << (size_t)&a << endl;
	}
	cout << a << ":" << (size_t)&a << endl;
}