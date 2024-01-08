#include <iostream>
#include <sstream>

using namespace std;

void Add(stringstream& sstr, int x, int y) {
	sstr.str("");	//str()‰Šú‰»
	sstr << x << "+" << y << " = " << (x + y) << flush;
}

int main() {
	stringstream sstr;

	Add(sstr, 2, 4);
	cout << sstr.str() << endl;

	Add(sstr, 4, 6);
	cout << sstr.str() << endl;
	
}