#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice() {
	//�I�[�o�[�t���[���Ȃ��悤�ɒ��ӁI
	
	return (int)(rand() / (RAND_MAX +1.0) * 6 ) + 1;
}

int main()
{
	for (int i = 0; i < 20; ++i) {
		cout << Dice() + Dice() << ' ';
	}
	cout << endl;
}