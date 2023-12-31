#pragma once
#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle {
public:
	double SetAccel() const;
	double SetBrake() const;
	double GetName() const;
	double GetKm() const;

protected:
	double Name;
	double km;
};

#endif //end VEHICLE_H_