#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

void Open(ifstream& file, const char* filename) {
	file.open(filename);
	if (file.is_open()) {
		throw "ファイルヒラケン";
	}
}

void GetLine(ifstream& file, string& line) {
	getline(file, line);
	if (file.fail()) {
		throw "ファイルから読み込めませんでした";
	}
}

int main() {

	try {
		ifstream file;
		Open(file, "text.txt");

		string line;
		GetLine(file, line);
		cout << line << endl;
	}
	catch (const char* error) {
		cerr << error << endl;
		return EXIT_FAILURE;
	}

}