#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i) {
		int a, b, op, result;

		cout << "‘æˆê€ > " << flush;
		cin >> a;
		cout << "‘æ“ñ€ > " << flush;
		cin >> b;
		cout << "1:‰ÁŽZ 2:Œ¸ŽZ 3:æŽZ 4:œŽZ > " << flush;
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
			cout << "^–Ê–Ú‚É‚¹‚ñ‚©‚¢Iiì“¡KŽOj" << endl;
			continue;
		}

		cout << "“š‚¦‚Í" << result << "‚Å‚·" << endl;
	}
}