#include "Truck.h"

Truck::Truck(int x, double cp, int n, const std::string& h)
	: Car(n, h), axles(x), capacity(cp)
{
	std::cout << "Creating an object of type Truck.\n";
}

Truck::~Truck()
{
	std::cout << "Destroying an object of type Truck.\n";
}

void Truck::setAxles(int x)
{
	axles = x;
}

int Truck::getAxles() const
{
	return axles;
}

void Truck::setCapacity(double cp)
{
	capacity = cp;
}

double Truck::getCapacity() const
{
	return capacity;
}

void Truck::display() const
{
	std::cout << "\nCar number: " << getNr()
		<< "\nProducer: " << getProd()
		<< "\nAxles Number: " << axles 
		<< "\nCapacity: " << capacity
		<< '\n';
}
