#pragma once
class Fraction // ordinary fraction
{
public:
	Fraction(): num(0), denom(1)  
	{}
	void print() const;
	void setDenom(int denom);
	void setNum(int num); //{ this->num = num; }; //inline method
	int getDenom() const;
	Fraction mult(const Fraction & two);

private:
	int num = 0, denom = 1;
};
inline void Fraction::setNum(int num)
{
	this->num = num;
}
