#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>

using namespace std;

Stream* CreateStream() {
	char ch;

	while (true) {
		cout << "i: InputStream, a:ArrayStream > " << flush;
		cin >> ch;

		switch (ch)
		{
		case 'i':
			return new InputStream();
		case 'a':
			while (true)
			{
				cout << "�z���I��ł�������(1,2) > " << flush;
				cin >> ch;
				if (ch == '1') {
					static const double ARRAY[] = { 1,2,3,-1 };
					static const int SIZE = sizeof ARRAY / sizeof * ARRAY;
					return new ArrayStream(ARRAY, SIZE);
				}
				else if (ch == '2') {
					static const double ARRAY[] = { 0.5,1.5,-1 };
					static const int SIZE = sizeof ARRAY / sizeof * ARRAY;
					return new ArrayStream(ARRAY, SIZE);
				}
			}
		}
	}
}

double Sum(Stream& stream) {
	double sum = 0;
	while (stream.Set()) {
		sum += stream.Get();

	}
	return sum;
}

int main() {
	for (int i = 0; i < 3; ++i) {
		Stream* stream = CreateStream();
		double sum = Sum(*stream);
		cout << "���v: " << sum << endl;
		delete stream;
	}
}