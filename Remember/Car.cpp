#include "Car.hpp"



Car::Car()
{
	this->setName("");
	this->setPrice(0);
}

Car::~Car()
{
}

void Car::setName(const string name)
{
	this->_name = name;
}

void Car::setPrice(const unsigned short int price)
{
	this->_price = price;
}
