#define _CRT_SECURE_NO_WARNINGS 1	//sprint�x���𖳎�������

#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_NAME = 16;

struct Student {
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student* student) {
	cout << "���O: " << (*student).name << endl
		<< "  ���� : " << (*student).scoreJapanese << " �_"
		<< ", ���w : " << (*student).scoreMath << " �_"
		<< ", �p�� : " << (*student).scoreEnglish << " �_" << endl;
}

int main() {
	Student student[] = {
		{"�Ԉ䗲",73,98,86,},
		{"��G",64,45,40,},
		{"����C",76,78,69,},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i) {
		Show(&student[i]);
	}
}