#define _CRT_SECURE_NO_WARNINGS 1	//sprintxπ³³Ήι

#include <iostream>
#include <cstdio>
using namespace std;

bool Input(double& n) {
	cin >> n;

	return n >= 0;
}

bool Average() {
	int count;
	double n;
	double avr = 0;

	for (count = 0; Input(n); ++count) {
		avr += n;
	}

	if (count == 0) {
		return false;
	}

	avr /= count;

	cout << "½ΟlΝ" << avr << "Ε·" << endl;
	return true;
}

int main() {
	while (Average()) {

	}
}