#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	fstream file;
	
	file.open("test.txt", ios::out);
	if (!file.is_open()) {
		return EXIT_FAILURE;
	}

	file << "ƒtƒ@ƒCƒ‹‚É‘‚«ž‚ñ‚¶‚á‚¦" << endl;
	file.close();
}