#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i) {
		int a, b, op, result;

		cout << "��ꍀ > " << flush;
		cin >> a;
		cout << "��� > " << flush;
		cin >> b;
		cout << "1:���Z 2:���Z 3:��Z 4:���Z > " << flush;
		cin >> op;

		if (op == 1) {
			result = a + b;
		}
		else if (op == 2) {
			result = a - b;
		}
		else if (op == 3) {
			result = a * b;
		}
		else if (op == 4) {
			result = a / b;
		}
		else {
			cout << "�^�ʖڂɂ��񂩂��I�i�쓡�K�O�j" << endl;
			continue;
		}

		cout << "������" << result << "�ł�" << endl;
	}
}