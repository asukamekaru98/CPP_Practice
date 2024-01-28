#include<iostream>

using namespace std;

void show() {
	cout << "shotime" << endl;
}

namespace MyProgram {
	void show() {
		cout << "yaa" << endl;
	}

	void Run() {
		show();
	}


}
int main() {
	MyProgram::Run();
	show();

	return 0;
}