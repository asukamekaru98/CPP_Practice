#include <iostream>

using namespace std;

template <typename TYPE>

size_t ArraySizze(TYPE array[])
{
	return sizeof array / sizeof *array;
}

int main()
{
	int n[100];
	cout << "Array size: " << ArraySizze(n) << endl;
	return 0;
}