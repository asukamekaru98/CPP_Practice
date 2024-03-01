#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

const char* Run() {
	ifstream file;

	file.open("test.txt");
	if (!file.is_open()) {
		return "�t�@�C���q���P��";
	}

	string line;
	getline(file, line);
	if (file.fail()) {
		return "�t�@�C��������";
	}

	cout << line << endl;

	return NULL;
}

int main() {
	const char* error = Run();

	if (error != NULL) {
		cerr << error << endl;
		return EXIT_FAILURE;
	}
}