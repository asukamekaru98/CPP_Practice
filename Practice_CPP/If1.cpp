#include <iostream>
using namespace std;

void BirthMonth() {
	int month;

	cout << "���Ȃ��͉������܂�ł��� > " << flush;
	cin >> month;

	if (1 <= month && month <= 12) {
		cout << "�ց[�A" << month << "���Ȃ�ł����B" << endl;
	}
	else {
		cout << month << "����ƁI�H" << endl
			<< "��Ȍ�����ւ��I�I�I�I" << endl;
	}
}

int main()
{
	BirthMonth();
	BirthMonth();

}