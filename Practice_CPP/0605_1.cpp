#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <algorithm>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
public:
	int m_array[INTARRAY_SIZE];

	IntArray();
};

IntArray::IntArray() {
	fill_n(m_array, INTARRAY_SIZE, 0);
}