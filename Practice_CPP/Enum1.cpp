#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdio>
using namespace std;

enum CompareResult {
	CR_LESS_THAN	= 0,	//��菬����
	CR_EQUAL_TO		= 1,	//������
	CR_GREATER_THAN = 2,	//���傫��
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

	cout << "������2���͂��Ă������� > " << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	switch (Compare(a,b))
	{
	case CR_LESS_THAN:
		cout << "�O�҂͌�҂�菬�����ł�" << endl;
		break;
	case CR_EQUAL_TO:
		cout << "���҂͓������ł�" << endl;
		break;
	case CR_GREATER_THAN:
		cout << "�O�҂͌�҂��傫���ł�" << endl;
		break;
	}

	return true;
}

int main() {
	while (Compare()) {
		//�������Ȃ�
	}
}