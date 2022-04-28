#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	mBrand = "Default";
	mModel = "Default";
	mColour = Colour::Red;
	mLicensePlate = "Default";
	mYear = 0000;
	mMileAge = 000000;
	mCost = 0000;
	mValue = 0000;
}

Car::Car(string brand, string model, string licensePlate, int mileAge, int value)
{
	mBrand = brand;
	mModel = model;
	mLicensePlate = licensePlate;
	mMileAge = mileAge;
	mValue = value;
}

Car::~Car() 
{

}

string Car::GetBrand()
{
	return mBrand;
}
string Car::GetModel()
{
	return mModel;
}
string Car::GetLicensePlate()
{
	return mLicensePlate;
}
int Car::GetYear()
{
	return mYear;
}
int Car::GetMileAge()
{
	return mMileAge;
}
int Car::GetCost()
{
	return mCost;
}
int Car::GetValue()
{
	return mValue;
}
void Car::CarIntroduce()
{
	cout << "\n" << "The Car " << mBrand << mModel << " was created" << "\n";
	cout << "Her license plate is " << mLicensePlate << "\n";
	cout << "With a mileage of " << mMileAge << "km ,it has a value of " << mValue << "\n";
}
