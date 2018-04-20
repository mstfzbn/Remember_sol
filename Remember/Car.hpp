#pragma once
#include "Includes.hpp"

class Car
{
public:
	Car();
	~Car();

	void setName( const string );
	void setPrice( const unsigned short int );
	virtual void showDetails() = 0;
protected:
	string _name;
	unsigned short int _price;

};

