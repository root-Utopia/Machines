#include "PassCar.h"

PassCar::PassCar(const std::string& tp, bool sd, int n, const std::string& h)
	: Car(n, h), passCarType(tp), sunRoof(sd)
{
	std::cout << "Creating an object of type PassCar.\n";
}

PassCar::~PassCar()
{
	std::cout << "Destroying an object of type PassCar.\n";
}


const std::string& PassCar::getType() const
{
	return passCarType;
}

void PassCar::setType(const std::string s)
{
	passCarType = s;
}

bool PassCar::getSunRoof() const
{
	return sunRoof;
}

void PassCar::setSunRoof(bool b)
{
	sunRoof = b;
}

void PassCar::display(void) const
{
	std::cout << "\nCar number: " << getNr()
		<< "\nProducer: " << getProd()
		<< "\nType: " << passCarType
		<< "\nSun Roof: "
		<< std::string(sunRoof ? "yes" : "no")
		<< '\n';
}
