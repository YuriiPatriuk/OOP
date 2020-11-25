#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction(const int num)
{
	this->num = num;
	this->denom = 1;
}

Fraction::Fraction(const int num, const int denom)
{
	this->num = num;
	if (denom == 0)
	{
		cout << "Denom error! Denom set as 1!" << endl;
		this->denom = 1;
	}
	else
		this->denom = denom;
	{

	}
}

void Fraction::print() const
{
	std::cout << num << "/" << denom << std::endl;
}

void Fraction::setNum(int num)
{
	this->num = num;
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

int Fraction::getNum() const
{
	return num;
}

void Fraction::abbreviation()
{

	for (size_t i = num; i > 1; i--)
	{
		if (num%i==0 && denom%i==0)
		{
			num /= i;
			denom /= i;
			break;
		}
	}
}

Fraction Fraction::mult(const Fraction& two)
{
	Fraction result;
	result.num = this->num*two.num;
	result.denom = this->denom*two.denom;
	return result;
}

Fraction Fraction::multIntegerNumber(int number) const
{
	Fraction res;
	res.denom = denom;
	res.num = num * number;
	return res;
}

void Fraction::comparison(const Fraction& two)
{
	if (num == two.num && denom == two.denom) {
		cout << "Fractions are same!" << endl;
	}
	else
		cout << "Fractions aren`t same!" << endl;

}

Fraction Fraction::plusIntegerNumber(int number) const
{
	Fraction res;
	res.denom = denom;
	res.num = num + number * denom;
	return res;
}

Fraction Fraction::plus(const Fraction& two)
{
	Fraction result;
	if (this->denom != two.denom)
	{
		result.denom = this->denom * two.denom;
		result.num = (this->num * two.denom) + (two.num * this->denom);
		return result;
	}
	else
	{
		result.denom = this->denom;
		result.num = this->num + two.num;
		return result;
	}
}

Fraction Fraction::minus(const Fraction& two)
{
	Fraction result;
	if (this->denom != two.denom)
	{
		result.denom = this->denom * two.denom;
		result.num = (this->num * two.denom) - (two.num * this->denom);
		return result;
	}
	else
	{
		result.denom = this->denom;
		result.num = this->num - two.num;
		return result;
	}
}

Fraction Fraction::division(const Fraction& two)
{
	Fraction res;
	res.num = num * two.denom;
	res.denom = denom * two.num;
	return res;
}



