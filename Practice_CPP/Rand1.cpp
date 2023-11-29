#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice() {
	return rand() % 6 + 1;
}

int main()
{
	for (int i = 0; i < 20; ++i) {
		cout << Dice() + Dice() << ' ';
	}
	cout << endl;
}