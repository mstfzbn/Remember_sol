#include "Sedan.hpp"



Sedan::Sedan()
{
}



Sedan::~Sedan()
{
}

void Sedan::showDetails()
{
	cout << "name of sedan: " << this->_name << endl;
	cout << "price of sedan: " << this->_price << endl;
}