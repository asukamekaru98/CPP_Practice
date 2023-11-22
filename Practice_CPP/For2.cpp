#include <iostream>
using namespace std;

int score[] = {
	641, 703, 405, 598,
	402, 752, 330, 0,
	445, 662, 254, 710,
	467, 663, 312, 555,
};

int main()
{
	int sum = 0;

	for (int i = 0; i < 16; ++i) {
		sum += score[i];
	}

	cout << "クラスの平均点は" << sum / 16.0
		<< "点です。" << endl;
}