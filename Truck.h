#pragma once

#include "Car.h"

class Truck :
	public Car
{
private:
	int axles;
	double capacity;
	
public:
	Truck(int, double, int = 0, const std::string& = "");
	~Truck();
	void setAxles(int);
	int getAxles() const;
	void setCapacity(double);
	double getCapacity() const;
	void display() const;
};

