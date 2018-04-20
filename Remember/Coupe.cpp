#include "Coupe.hpp"



Coupe::Coupe()
{
}


Coupe::~Coupe()
{
}

void Coupe::showDetails()
{
	cout << "name of coupe: " << this->_name << endl;
	cout << "price of coupe: " << this->_price << endl;
}