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

	cout << "¼—ï‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
	cin >> year;

	Western2Showa(year);
	if (year != 0) {
		cout << "‚»‚Ì”N‚Íº˜a" << year << "”N‚Å‚·" << endl;
	}
	else {
		cout << "‚»‚Ì”N‚Íº˜a‚Å‚Í—L‚è‚Ü‚¹‚ñ" << endl;
	}
}

int main()
{
	Showa();
	Showa();
}