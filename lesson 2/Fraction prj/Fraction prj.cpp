#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
	Fraction one;
	Fraction two(-3,4);
	Fraction three;
	one.setNum(7);
	one.setDenom(-8);
	one.print();
	two.print();
	one.comparison(two);

	three = one.division(two);
	three.print();
	three.abbreviation();
	three.print();
	
	return 0;
}

