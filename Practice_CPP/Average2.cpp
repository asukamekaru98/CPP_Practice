#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

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

	cout << "���ϒl��" << avr << "�ł�" << endl;
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