#pragma once

#include "Car.h"

class PassCar :
	public Car // Derived class
{
private:
	std::string passCarType;
	bool sunRoof;
	
public:
	// Constructor:
	PassCar(const std::string&, bool,
		int = 0, const std::string& = "");
	~PassCar();
	// Access methods:
	const std::string& getType() const;
	void setType(const std::string s);
	bool getSunRoof() const;
	void setSunRoof(bool b);
	void display() const;
};

