#include <iostream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string line;

		cout << "�Ȃɂ����͂���͂��Ă������� > " << flush;
		getline(cin, line);
		if (line == "quit") {
			break;
		}

		string::size_type pos = line.rfind("�B");
		if (pos == string::npos) {
			line += "�A���l�B";
		}
		else {
			line.insert(pos, "�A���l�B");
		}
		cout << line << endl;
	}
}