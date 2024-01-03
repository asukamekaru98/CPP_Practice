#include "InputStream.h"
#include <iostream>

using namespace std;

InputStream::InputStream(double n):
Stream(n)
{
	cout << "InputStream" << endl;
}

void InputStream::SetBase() {
	cout << "InputStream::SetBase" << endl;
	cin >> m_n;
}
/*07-05
bool InputStream::Set() {
	cin >> m_n;
	return m_n >= 0;
}
*/