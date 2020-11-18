#pragma once
#ifndef __VEHICLE__
#define __VEHICLE__

class Vehicle
{
public:
	enum class YearLimits {MIN_YEAR = 2000, MAX_YEAR = 2021};
	static const size_t MAX_SPEED_LIMIT = 360; // static - field exist(існує) in one form for all objects type
	void setBrand(const char* brand); //setter, mutator
	void setYear(const size_t& year);
	void setMaxSpeed(const size_t& maxSpeed);
	const char* getBrand() const; //getter  const - this method doesn`t change any field in class
	const size_t & getYear() const;
	const size_t & getMaxSpeed() const;
	void print() const;
	Vehicle(); //default
	//Vehicle() = default; //constructor (ctor) 
	Vehicle(const char* brand, const size_t& year, const size_t& maxSpeed = MAX_SPEED_LIMIT);
	Vehicle(const char* brand);
	~Vehicle();// deconstructor (dtor)

private:
	char* brand = nullptr; // it will be dynamic field
	size_t year = 0;
	size_t maxSpeed = 0;

};

#endif // препроцесорний
