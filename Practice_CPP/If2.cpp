#include <iostream>
using namespace std;

void Divide() {
	int a, b;

	cout << "1�Ԗڂ̒l����͂��Ă������� > " << flush;
	cin >> a;

	cout << "2�Ԗڂ̒l����͂��Ă������� > " << flush;
	cin >> b;

	if (b == 0) {
		cout << "0���͋֎~����Ă܂�" << endl;
	}
	else {
		cout << a << "/" << b << "="
			<< a / b << "�E�E�E" << a % b << endl;
	}

}

int main()
{
	Divide();
	Divide();
}