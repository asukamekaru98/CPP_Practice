#include <iostream>
using namespace std;

void Western2Showa(int x) {
	if (1926 <= x && x <= 1989) {
		x -= 1925;

	}
	else {
		x = 0;
	}
}

void Showa() {
	int year;

	cout << "�������͂��Ă������� > " << flush;
	cin >> year;

	Western2Showa(year);
	if (year != 0) {
		cout << "���̔N�͏��a" << year << "�N�ł�" << endl;
	}
	else {
		cout << "���̔N�͏��a�ł͗L��܂���" << endl;
	}
}

int main()
{
	Showa();
	Showa();
}