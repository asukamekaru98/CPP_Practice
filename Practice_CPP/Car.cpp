#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(){
	cout << "Class Car コンストラクタ" << endl;
	door = false;
}

//ホーン
bool Car::Horn() const {
	
	cout << "ピッピー" << endl;
	
	return true;
}

//ドアオープン
bool Car::OpenDoor() const {
	return true;
}