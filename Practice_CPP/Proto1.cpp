#define _CRT_SECURE_NO_WARNINGS 1	//sprintxπ³³Ήι

#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y);	//ΦΥλΖ½’Υ

int main()
{
	cout << "f(1,2) = " << f(1, 2) << endl;
	cout << "f(182,144) = " << f(182, 144) << endl;
}

int f(int x, int y) {
	return 2 * x + y;
}