#include <iostream>
using namespace std;

//��������a�ɕύX����
//�ςȒl���n���ꂽ�Ƃ��A0��Ԃ�

int WesternToShouwa(int western) {
	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}
	else {
		return 0;
	}
}

void showa() {
	int western;

	cout << "�������͂��Ă������� > " << flush;
	cin >> western;

	int shouwa = WesternToShouwa(western);

	if (shouwa == 0) {
		cout << "���̐���͏��a�ł͂���܂���" << endl;
	}
	else {
		cout << "���̐���́A���a" << shouwa << "�N�ł��B" << endl;
	}
}

int main()
{
	showa();
	showa();
}