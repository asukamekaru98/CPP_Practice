#include<iostream>
using namespace std;


void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "おあああ";	
		delete[] p;

	}
	catch (...) {//... を例外の再送出と呼ぶ
		cerr << "メモリ解放します" << endl;
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