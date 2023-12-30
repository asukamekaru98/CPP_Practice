#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

#include <iostream>
#include "InputStream.h"
using namespace std;

bool Average(InputStream& stream) {
	int count;
	double avr = 0;

	for (count = 0; stream.Set(); ++count) {
		avr += stream.Get();
	}

	if (count == 0) {
		return false;
	}

	avr /= count;

	cout << "•½‹Ï’l‚Í" << avr << "‚Å‚·" << endl;
	return true;
}

int main() {
	while (true) {
		InputStream stream;
		if (!Average(stream)) {
			break;
		}
	}
}