#include <iostream>
using namespace std;

int a;

int main() {
	cout << "なにか値を入れてね > " << flush;
	cin >> a;

	cout << "その数を3で割ったあまりは" << a % 3 << "です" << endl;
}


