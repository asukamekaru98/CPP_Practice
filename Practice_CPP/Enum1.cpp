#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
#include <cstdio>
using namespace std;

enum CompareResult {
	CR_LESS_THAN	= 0,	//‚æ‚è¬‚³‚¢
	CR_EQUAL_TO		= 1,	//“™‚µ‚¢
	CR_GREATER_THAN = 2,	//‚æ‚è‘å‚«‚¢
};

CompareResult Compare(int a, int b) {
	if (a < b) {
		return CR_LESS_THAN;
	}
	else if (a > b) {
		return CR_GREATER_THAN;
	}
	else {
		return CR_EQUAL_TO;
	}
}

bool Compare() {
	int a, b;

	cout << "”š‚ğ2‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	switch (Compare(a,b))
	{
	case CR_LESS_THAN:
		cout << "‘OÒ‚ÍŒãÒ‚æ‚è¬‚³‚¢‚Å‚·" << endl;
		break;
	case CR_EQUAL_TO:
		cout << "—¼Ò‚Í“™‚µ‚¢‚Å‚·" << endl;
		break;
	case CR_GREATER_THAN:
		cout << "‘OÒ‚ÍŒãÒ‚æ‚è‘å‚«‚¢‚Å‚·" << endl;
		break;
	}

	return true;
}

int main() {
	while (Compare()) {
		//‰½‚à‚µ‚È‚¢
	}
}