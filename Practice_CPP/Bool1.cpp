#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
using namespace std;

//��Βl�����߂�
int Abs(int a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

double Abs(double a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

//����
bool Input(int& i, double& d) {
	cout << "�����l����͂��Ă��������B >" << flush;
	cin >> i;
	if (i == 0) {
		return false;
	}

	cout << "�����l����͂��Ă��������B >" << flush;
	cin >> d;
	if (d == 0) {
		return false;
	}
	return true;
}

//��Βl��\��
void Showabs(int i, double d) {
	cout << i << "�̐�Βl��" << Abs(i) << "�ŁA" << endl
		<< d << "�̐�Βl��" << Abs(d) << "�ł��B" << endl;
}

int main() {
	int i;
	double d;

	while (Input(i, d)) {
		Showabs(i, d);
	}
}