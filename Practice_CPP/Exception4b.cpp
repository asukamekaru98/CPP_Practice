#include<iostream>
using namespace std;


void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "��������";	
		delete[] p;

	}
	catch (...) {//... ���O�̍đ��o�ƌĂ�
		cerr << "������������܂�" << endl;
		delete[] p;
		throw;
	}

}

int main() {

	//Error();

	try {
		Error();
	}
	catch (const char* error) {
		cerr << error << endl;
	}
}