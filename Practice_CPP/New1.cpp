#define _CRT_SECURE_NO_WARNINGS 1	//sprintxð³³¹é

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int* p = new int;

	*p = 0;
	cout << *p << endl;

	delete p;
}