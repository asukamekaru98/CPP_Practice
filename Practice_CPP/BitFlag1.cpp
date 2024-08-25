#include<iostream>
using namespace std;

int Bit(int x) {
	return 1 << x;
}

const int SHOW_X = Bit(0);
const int SHOW_Y = Bit(1);
const int SHOW_Z = Bit(2);

void Show(int flag) {
	cout << ((flag & SHOW_X) != 0 ? 'X' : 'x')
		<< ((flag & SHOW_Y) != 0 ? 'Y' : 'y')
		<< ((flag & SHOW_Z) != 0 ? 'Z' : 'z')
		<< endl;
}

int main() {
	Show(0);
	Show(SHOW_X);
	Show(SHOW_X | SHOW_Z);
	Show(SHOW_X | SHOW_Y | SHOW_Z);
}