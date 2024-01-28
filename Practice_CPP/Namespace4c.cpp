#include<iostream>

using namespace std;

void show();

namespace MyProgram {
	void Run();
	void show();
}

int main() {
	MyProgram::Run();
	show();

	return 0;
}

void show() {
	cout << "shotime" << endl;
}

namespace MyProgram {

	void Run() {
		show();
	}
	void show() {
		cout << "yaa" << endl;
	}




}
