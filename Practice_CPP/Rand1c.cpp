#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand() {
	srand((unsigned int)time(NULL));
}

int Dice() {
	return rand() % 6 + 1;
}

int main()
{
	InitRand();
	for (int i = 0; i < 20; ++i) {
	cout << Dice() + Dice() << ' ';
	}
	cout << endl;
}