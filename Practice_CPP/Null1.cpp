#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

const char* const MONTH_NAME[] = {
	"����","�@��","�퐶","�K��","�H��","������",
	"����","�t��","����","�_����","����","�t��"
};

const char* GetOldMonthName(int month) {
	if (1 <= month && month <= 12) {
		return MONTH_NAME[month - 1];
	}
	return 0;
}

int main() {
	int month = 0;

	cout << "���͉����ł��� > " << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);
	
	if (name == 0) {
		cout << "�n�@�H" << endl;
	}
	else {
		cout << name << endl;
	}
	
	
}