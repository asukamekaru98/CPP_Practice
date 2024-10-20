#include "FileException2.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void Open(ifstream& file, const char* filename) {
	file.open(filename);
	if (!file.is_open()) {
		throw OpenFileException(filename);
	}
}

void GetLine(ifstream& file, string& line) {
	getline(file, line);
	if (file.fail()) {
		throw ReadFileException();
	}
}

int main() {
	try {
		ifstream file;
		Open(file, "test.txt");

		string line;
		GetLine(file, line);
		cout << line << endl;
	}
	catch (const FileException& e) {
		cerr << e.What() << endl;
		return EXIT_FAILURE;
	}
}