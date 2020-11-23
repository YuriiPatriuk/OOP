#include <iostream>
#include<string>
#include<ctime>
#include "Car.h"
using namespace std;


int main()
{
	srand(time(NULL));
	Car car1;
	car1.print();
	Car car2;
	car2.print();

	return 0;
}
