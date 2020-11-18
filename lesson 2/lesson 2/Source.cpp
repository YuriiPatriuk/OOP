#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

int main() {
	Vehicle bike;
	bike.print();
	return 0;

	bike.setBrand("Yamaha");
	bike.setYear(2019);
	bike.setMaxSpeed(260);

	bike.print();
	cout << endl;

	Vehicle car("Mazda",2018, 280); // this = address of car
	car.print();// this - address of car
	cout << endl;

	Vehicle car2("Nissan",2005); // speed = 360
	car2.print();
	cout << endl;

	Vehicle train("Hundai");
	train.print();


	return 0;
}