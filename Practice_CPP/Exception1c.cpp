#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

int Error(const char* error) {
	cerr << error << endl;
	return EXIT_FAILURE;
}

int main() {
	ifstream file;

	file.open("text.txt");

	if (!file.is_open()) {
		return Error("�t�@�C���q���P��");
	}

	string line;
	getline(file, line);
	if (file.fail()) {
		return Error("�t�@�C��������");
	}

	cout << line << endl;

}