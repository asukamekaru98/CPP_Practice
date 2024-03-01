#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	ifstream file;

	file.open("test.text");
	if (!file.is_open()) {
		cerr << "ファイルを開けませんでした" << endl;

		return EXIT_FAILURE;
	}

	string line;
	getline(file, line);
	if (file.fail()) {
		cerr << "読めん" << endl;
		return EXIT_FAILURE;
	}

	cout << line << endl;

}