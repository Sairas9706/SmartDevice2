#pragma once
#include <iostream>
#include <string>

using namespace std;

class MotionSensor
{
public:
	int distance;
};

class Dimlights
{
	int visibility;
};

class Temperature
{
	int degrees;
};

//
//class Car
//{
//public:
//	string make;
//	MotionSensor* distance2[0];
//	Dimlights* visibility2;
//	Temperature* degrees2;
//
//	Car(string amake, int distance2, int visibility2, int degrees2)
//	{
//		for (int i = 0; i < 4; i++)				//Just at example!
//		{
//			distance2[i] = new MotionSensor();
//			distance2[i]->distance = distance2;
//		}
//		make = amake;
//		visibility2 = new Dimlights();
//		visibility2->Visibility = visibility;
//		degrees2 = new Temperature();
//		degrees2->degrees = degrees;
//	}
//	virtual void specifications()
//	{
//		cout << "make: " << make << endl;
//		cout << "Dimlights: " << visibility2->visibility << endl;
//		cout << "Temperature: " << degrees2->degrees << endl;
//		cout << "Degrees: " << degrees2->degrees << endl;
//	}
//
//	~Car()
//	{
//		for (int i= 0; i < 4)
//
//	}
//};