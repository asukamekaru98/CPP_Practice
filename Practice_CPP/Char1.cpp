#include <iostream>
using namespace std;

void ShowCode(char ch) {
	cout << "u" << ch << "v‚É‚Ó‚ç‚ê‚½”Ô†‚Í"
		<< (int)(unsigned char)ch << "‚Å‚·" << endl;
}

int main()
{
	ShowCode('0');
	ShowCode('A');
}