#include<iostream>
using namespace std;


void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "おあああ";	//これは、mainのcatchに投げるthrow
		delete[] p;

	}
	catch (const char* error) {
		cerr << "メモリ解放します" << endl;
		delete[] p;
		throw error;//※mainにcatch処理がなければ例外処理がエラーを検知する
	}

}

int main() {

	//Error();
	
	try {
		Error();
	}
	catch (const char* error) {	//char型以外（int）でもキャッチできる
		cerr << error << endl;	//ここでキャッチされる
	}
}