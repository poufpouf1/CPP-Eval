#pragma once
#include <string>
#include <vector>
#include "Colour.h"
class Car
{
private:
	std::string mBrand;
	std::string mModel;
	Colour mColour;
	std::string mLicensePlate;
	int mYear;
	int mMileAge;
	int mCost;
	int mValue;

public:
	//Constructor / Destructor
	Car();
	Car(std::string brand, std::string model, std::string licensePlate, int mileAge, int value);
	~Car();

	std::string GetBrand();
	std::string GetModel();
	std::string GetLicensePlate();
	int GetYear();
	int GetMileAge();
	int GetCost();
	int GetValue();
	void CarIntroduce();
};

