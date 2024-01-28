#include<iostream>

using namespace std;

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
int main() {
	MyProgram::Run();
	show();

	return 0;
}