#include <iostream>
using namespace std;

int main()
{
	char hello[] = "Hello!";

	cout << "�u" << hello << "�v�𕶎��R�[�h�ɕς����" << endl;

	for (int i = 0; i < (int)sizeof hello; ++i) {
		cout << (unsigned int)hello[i] << ",";
	}

	cout << endl
		<< "�ɂȂ�܂��B" << endl;
}