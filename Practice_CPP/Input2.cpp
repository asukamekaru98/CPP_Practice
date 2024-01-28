#include<iostream>
#include<cstdlib>
#include<stdlib.h>

using namespace std;

bool SkipOnError(istream& istr) {
	if (istr.fail()) {
		if (istr.eof()) {
			exit[EXIT_FAILURE];
		}
		char ch;
		istr.clear();
		istr >> ch;
		return true;
	}
	else {
		return true;
	}
}

int main() {
	int n;

	do {
		cin >> n;
	} while (SkipOnError(cin));

	cout << "esafiuhdsifhsiojfh " << n << "jhSEFjkdjkfg" << endl;

}