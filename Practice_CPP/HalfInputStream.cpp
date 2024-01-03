#include "HalfInputStream.h"
#include <iostream>

using namespace std;

void HalfInputStream::SetBase() {
	//cin >> m_n;
	
	InputStream::SetBase();
	m_n /= 2;

}