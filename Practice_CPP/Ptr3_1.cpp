#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

int main() {
	int n[4];

	for (int* p = n, *end = &n[4],j = 0; p != end; ++p,j++) {
		*p = j;
	}

	for (int* p = n, *end = &n[4], j = 0; p != end; ++p, j++) {
		cout << "n	:" << n[j] << endl;

	}
}