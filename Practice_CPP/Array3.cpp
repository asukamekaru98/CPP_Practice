#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

int main() {
	int array[10];

	cout << "array	:" << (size_t)array << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&array[" << i << "] : " << (size_t) & array[i] << endl;
	}
}