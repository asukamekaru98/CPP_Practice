#include "Stream.h"
#include <iostream>

using namespace std;

#if 0//7-10
Stream::Stream(double n) {
	cout << "Stream" << endl;
	m_n = n;
}
#endif

Stream::Stream():
m_n(1)
{
}

Stream::~Stream(){}

double Stream::Get() const {
	return m_n;
}

bool Stream::Set() {
	cout << "Stream::Set" << endl;
	SetBase();
	return m_n >= 0;
}

#if  0//07-06
void Stream::SetBase() {
	cout << "Stream::SetBase" << endl;

	m_n = -1;
}
#endif //  1

/*07-05
bool Stream::Set() {
	cout << "Stream::Set" << endl;

	m_n = -1;
	return false;
}
*/