#include "Fraction.h"
#include <iostream>

void Fraction::print() const
{
	std::cout << num << "/" << denom << std::endl;
}

void Fraction::setDenom(int denom)
{
	if (denom==0)
	{
		denom = 1;
	}
	else if (denom<0)
	{
		num = -num;
		denom = -denom;
	}
	this->denom = denom;
}

int Fraction::getDenom() const
{
	return denom;
}

Fraction Fraction::mult(const Fraction& two)
{
	Fraction result;
	result.num = this->num*two.num;
	result.denom = this->denom*two.denom;
	return result;
}



