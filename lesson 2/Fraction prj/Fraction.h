#pragma once
class Fraction // ordinary fraction
{
public:
	Fraction(): num(0), denom(1)  
	{}
	Fraction(int num);
	Fraction(int num, int denom);

	void print() const;
	void setDenom(int denom);
	void setNum(int num); //{ this->num = num; }; //inline method
	int getDenom() const;
	int getNum() const;

	void abbreviation();
	Fraction plus(const Fraction & two);
	Fraction minus(const Fraction & two);
	Fraction mult(const Fraction & two);
	Fraction division(const Fraction & two);
	Fraction plusIntegerNumber(int number)const;
	Fraction multIntegerNumber(int number)const;
	void comparison(const Fraction& two);

private:
	int num = 0, denom = 1;
};


