#include<iostream>

using namespace std;

namespace Name1 {
	void Func() {
		cout << "name1::func" << endl;
	}

	void Hoge() {
		cout << "name1::hoge" << endl;
	}
}

namespace Name2 {
	void Func() {
		cout << "name2::func" << endl;
	}
}

using namespace Name1;
int main() {
	Func();
	Name2::Func();
	Hoge();
}