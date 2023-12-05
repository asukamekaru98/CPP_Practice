#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
using namespace std;

const char* const MONTH_NAME[] = {
	"—¤Œ","”@Œ","–í¶","‰KŒ","HŒ","…–³Œ",
	"•¶Œ","—tŒ","’·Œ","_–³Œ","–¶Œ","t‘–"
};

const char* GetOldMonthName(int month) {
	if (1 <= month && month <= 12) {
		return MONTH_NAME[month - 1];
	}
	return "ƒnƒ@H";
}

int main() {
	int month = 0;

	cout << "¡‚Í‰½Œ‚Å‚·‚© > " << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);
	cout << name << endl;
}