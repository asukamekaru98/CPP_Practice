#pragma once
#ifndef CAR_H_
#define CAR_H_

#include "Vehicle.h"

class Car:
public Vehicle
{
public:
	Car();//コンストラクタ

	bool Horn() const;
	bool OpenDoor() const;
	bool CloseDoor() const;

protected:
	bool door;
};

#endif //end VEHICLE_H_