#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	void Show();
};

void Student::Show() {
	cout << "���O: " << name << endl
		<< "  ���� : " << scoreJapanese << " �_"
		<< ", ���w : " << scoreMath << " �_"
		<< ", �p�� : " << scoreEnglish << " �_" << endl;
}

int main() {
	Student student[] = {
		{"�Ԉ䗲",73,98,86,},
		{"��G",64,45,40,},
		{"����C",76,78,69,},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i) {
		student[i].Show();
	}
}