#include <iostream>

using namespace std;

int main() {
	typedef int* IntPtr;

	int n = 0;

	const IntPtr p = &n;
	IntPtr const q = &n;

	p = &n;
	q = &n;

	*p = 1;
	*q = 2;
}