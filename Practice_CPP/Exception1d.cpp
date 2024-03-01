#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	const char* error = NULL;
	ifstream file;
	string line;

	file.open("text.txt");

	if (!file.is_open()) {
		error = "�t�@�C���q���P��";
		goto ON_ERROR;
	}

	
	getline(file, line);
	if (file.fail()) {
		error = "�t�@�C��������";
		goto ON_ERROR;
	}

	cout << line << endl;

	return EXIT_SUCCESS;

ON_ERROR:
	cerr << error << endl;

	return EXIT_FAILURE;
}