#include "Stream.h"
#include <iostream>

using namespace std;

double Stream::Get() const {
	return m_n;
}

bool Stream::Set() {
	cout << "Stream::Set" << endl;
	SetBase();
	return m_n >= 0;
}

void Stream::SetBase() {
	cout << "Stream::SetBase" << endl;

	m_n = -1;
}

/*
bool Stream::Set() {
	cout << "Stream::Set" << endl;

	m_n = -1;
	return false;
}
*/