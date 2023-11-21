#include <iostream>
using namespace std;

//西暦を昭和に変更する
//変な値が渡されたとき、0を返す

int WesternToShouwa(int western) {
	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}
	else {
		return 0;
	}
}

void showa() {
	int western;

	cout << "西暦を入力してください > " << flush;
	cin >> western;

	int shouwa = WesternToShouwa(western);

	if (shouwa == 0) {
		cout << "その西暦は昭和ではありません" << endl;
	}
	else {
		cout << "その西暦は、昭和" << shouwa << "年です。" << endl;
	}
}

int main()
{
	showa();
	showa();
}