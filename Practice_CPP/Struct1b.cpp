#define _CRT_SECURE_NO_WARNINGS 1	//sprintŒx‚ğ–³‹‚³‚¹‚é

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
	cout << "–¼‘O: " << (*student).name << endl
		<< "  ‘Œê : " << (*student).scoreJapanese << " “_"
		<< ", ”Šw : " << (*student).scoreMath << " “_"
		<< ", ‰pŒê : " << (*student).scoreEnglish << " “_" << endl;
}

int main() {
	Student student[] = {
		{"Ôˆä—²",73,98,86,},
		{"ÂˆäG",64,45,40,},
		{"”’ˆäC",76,78,69,},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i) {
		Show(&student[i]);
	}
}