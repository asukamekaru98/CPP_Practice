#include <iostream>

using namespace std;


#define ARRAY_SIZE(array) (sizeof (array) / sizeof *(array))

int main()
{
	int n[100];
	cout << "Array size: " << ARRAY_SIZE(n) << endl;
	return 0;
}