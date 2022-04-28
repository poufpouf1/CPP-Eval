#pragma once
#include <string>
#include <vector>
#include "Car.h"

class Person
{
private:

	//Name
	std::string mName;
	//Last Name
	std::string mLastName;
	//Date of Birth
	int mDateOfBirth;
	//Money
	int mMoney;
	//Car
	bool mHaveCar;

public:
	//Constructor / Destructor
	Person();
	Person(std::string name,std::string lastName, int dateOfBirth, int money, bool haveCar);
	~Person();
	//Getters / Setters
	std::string GetName();
	std::string GetLastName();
	int dateOfBirth();
	int GetMoney();
	bool GetCar();
	void PersonIntroduce();

};

