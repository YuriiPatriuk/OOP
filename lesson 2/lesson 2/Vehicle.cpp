#include <iostream>
using namespace std;
#include "Vehicle.h"

void Vehicle::setBrand(const char* brand)
{
    if (brand == nullptr || strlen(brand) == 0)
    {
        return; //exit from void function
    }
    if (this->brand != nullptr) 
    {
        delete [] this->brand; // delete old brand
    }
    size_t size = strlen(brand) + 1;
    this->brand = new char[size]; // set new area for brend
    strcpy_s(this->brand, size, brand);// where in, size, whete from
}

void Vehicle::setYear(const size_t& year)
{
    if (year > (size_t)YearLimits::MAX_YEAR)
    {
        this->year = (size_t)YearLimits::MAX_YEAR;
    }
    else if (year < (size_t)YearLimits::MIN_YEAR)
    {
        this->year = (size_t)YearLimits::MAX_YEAR;
    }
    else
    {
        this->year = year; // this = pointer(вказівник) at object for which method works, come in method common(не явно) 
        //this->year - class field
        //year - formal parametr
    }
}

void Vehicle::setMaxSpeed(const size_t& maxSpeed)
{
    if (maxSpeed>MAX_SPEED_LIMIT)
    {
        this->maxSpeed = MAX_SPEED_LIMIT;
    }
    else
    {
        this->maxSpeed = maxSpeed;
    }
}

const char* Vehicle::getBrand() const
{
    return brand;
}

const size_t& Vehicle::getYear() const
{
    return year;
}

const size_t& Vehicle::getMaxSpeed() const
{
    return maxSpeed;
}

void Vehicle::print() const
{
    cout << "Brand: " << brand << endl;   
    cout << "Year: " << year << endl;
    cout << "Max speed: " << maxSpeed << endl;
}

Vehicle::Vehicle()
    :Vehicle("unknown vehicle")
{
}

Vehicle::Vehicle(const char* brand, const size_t& year, const size_t& maxSpeed)
{
    setBrand(brand);
    setYear(year);
    setMaxSpeed(maxSpeed);
}

Vehicle::Vehicle(const char* brand)
    :Vehicle(brand,(size_t)YearLimits::MIN_YEAR)
{
    
}

Vehicle::~Vehicle()
{
    if (brand!=nullptr)
    {
        delete[] brand;
        brand = nullptr;
    }
}
