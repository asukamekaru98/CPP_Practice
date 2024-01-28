#include<iostream>

using namespace std;

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
	//Run();

	return 0;
}