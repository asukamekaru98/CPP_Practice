#include<iostream>
using namespace std;

void Error() {
	cerr << "c" << endl;	//2
	try {
		cerr << "d" << endl;	//3
		throw 1;
		cerr << "e" << endl;

	}
	catch (int error) {
		cerr << "f" << endl;	//4
		throw"Corrct";
		cerr << "g" << endl;
	}
	catch (const char* error) {
		cerr << "h" << endl;
		cerr << "�������łǂ��̂�����" << endl;
		cerr << "i" << endl;
	}
	cerr << "j" << endl;

}

int main() {
	try {
		cerr << "a" << endl;	//1
		Error();
		cerr << "b" << endl;	//
	}
	catch (const char* error) {
		cerr << "����Ƃ�����������" << endl;	//�����ŃL���b�`�����
	}
}