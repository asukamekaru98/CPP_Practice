#include<iostream>
using namespace std;


void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "��������";	//����́Amain��catch�ɓ�����throw
		delete[] p;

	}
	catch (const char* error) {
		cerr << "������������܂�" << endl;
		delete[] p;
		throw error;//��main��catch�������Ȃ���Η�O�������G���[�����m����
	}

}

int main() {

	//Error();
	
	try {
		Error();
	}
	catch (const char* error) {	//char�^�ȊO�iint�j�ł��L���b�`�ł���
		cerr << error << endl;	//�����ŃL���b�`�����
	}
}