#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
	Fraction one;
	one.setNum(2);
	one.setDenom(3);
	one.print();

	Fraction two;
	two.setNum(5);
	two.setDenom(7);
	two.print();

	(one.mult(two)).print();
	Fraction three = one.mult(two);
	three.print();

	return 0;
}

