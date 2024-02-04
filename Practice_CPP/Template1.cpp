#include<iostream>

using namespace std;

template <typename TYPE>
TYPE abs(TYPE a) {
	return a < 0 ? -a : a;
}

int main() {
	cout << abs(10) << endl;
	cout << abs(-0.89) << endl;
}