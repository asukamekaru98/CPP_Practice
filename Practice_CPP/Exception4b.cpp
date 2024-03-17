#include<iostream>
using namespace std;


void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "‚¨‚ ‚ ‚ ";	
		delete[] p;

	}
	catch (...) {//... ‚ğ—áŠO‚ÌÄ‘—o‚ÆŒÄ‚Ô
		cerr << "ƒƒ‚ƒŠ‰ğ•ú‚µ‚Ü‚·" << endl;
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