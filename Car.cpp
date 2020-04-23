#include "Car.h"

Car::Car(long n, const std::string& prod)
	: nr(n), producer(prod)
{
	std::cout << "Creating an object of type Car.\n";
}

Car::~Car()
{
	std::cout << "Destroying an object of type Car.\n";
}

long Car::getNr() const
{
	return nr;
}

void Car::setNr(long n)
{
	nr = n;
}

const std::string& Car::getProd() const
{
	return producer;
}

void Car::setProd(const std::string& p)
{
	producer = p;
}

void Car::display(void) const
{
	std::cout << "\nCar number: " << getNr()
		<< "\nProducer: " << getProd()
		<< '\n';
}