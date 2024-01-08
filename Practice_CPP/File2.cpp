#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	fstream file;

	file.open("test.txt", ios::in);
	if (!file.is_open()) {
		return EXIT_FAILURE;
	}

	string str;
	getline(file, str);
	file.close();

	cout << str << endl;
}