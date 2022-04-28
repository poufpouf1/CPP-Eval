#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	mName = "Default";
	mLastName = "Default";
	mDateOfBirth = 22102001;
	mMoney = 99999;
	mHaveCar = true;
}

Person::Person(string name,string lastName, int dateOfBirth, int money, bool haveCar)
{
	mName = name;
	mLastName = lastName;
	mDateOfBirth = dateOfBirth;
	mMoney = money;
	mHaveCar = true;
}

Person::~Person()
{

}

//Getters / Setters
string Person::GetName()
{
	return mName;
}
string Person::GetLastName()
{
	return mLastName;
}
int Person::dateOfBirth()
{
	return mDateOfBirth;
}
int Person::GetMoney()
{
	return mMoney;
}
bool Person::GetCar()
{
	return mHaveCar;
}
void Person::PersonIntroduce()
{
	cout << "\nThe person " << mName << " was created\n ";
	cout << mName << mLastName << " was born on " << mDateOfBirth << "\n";
	
	if (mHaveCar == true)
	{
		cout << mName << " has " << mMoney << "euro and a car" << "\n";
	}
	else if (mHaveCar == false)
		cout << mName << " has " << mMoney << "euro and no car" << "\n";
}
