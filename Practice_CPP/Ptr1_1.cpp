#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

int main() {
	char a = 1;
	char a2 = 2;
	char* p;
	char* p2;

	p = &a;
	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t)&a << endl;

	p2 = &a2;
	cout << "p2 = " << (size_t)p2 << endl
		<< "a2 = " << (size_t)a2 << endl
		<< "*p2 = " << (size_t)*p2 << endl
		<< "&a2 = " << (size_t)&a2 << endl
		<< "&p2 = " << (size_t)&p2 << endl;
}