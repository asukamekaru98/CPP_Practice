#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(){
	cout << "Class Car �R���X�g���N�^" << endl;
	door = false;
}

//�z�[��
bool Car::Horn() const {
	
	cout << "�s�b�s�[" << endl;
	
	return true;
}

//�h�A�I�[�v��
bool Car::OpenDoor() const {
	return true;
}