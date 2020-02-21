/// 17070546 > smart device  ////
// Model directly managed the data, logic and rules of the application 
//

#pragma once
#include <iostream>
#include <string>
#include "Controller.h"


using namespace std;

class Model			
{
public:
	Model() { retrieveDataFromDatabase(); }

	const std::string getName() const;

	void setName(const std::string name);

	float getTemperature() const;			//data to be manipulated according to sensors

	void setTemprature(const float temp);

	void retrieveDataFromDatabase();

private:
	float temp;
	std::string name;

};

const string Model::getName() const
{
	return this->name;					//Get name
}

void Model::setName(const string name)
{
	this->name = name;
}

float Model::getTemperature() const
{
	return temp;								//Get, show temp
}

void Model::setTemprature(const float temp)
{
	this->temp = temp;
}

void Model::retrieveDataFromDatabase()
{
	setName("Ferrari");
	setTemprature(10);
}
//
//class View
//{
//public:
//	void printModelDetails(Model* m) const;
//
//	uint16_t mainMenu()
//	{
//		return 0;
//	}//Unsigned integer
//};
//
//class Controller
//{
//public:
//	Controller(Model* model, View* view);				// USage of pointer
//	void setView(View* view);
//
//	void setTemperature(float temp);
//
//	float getTemperature() const;
//
//	void run();
//
//
//	//asdkasdkasd
//private:
//	Model* model;
//	View* view;
//};
//
//Controller::Controller(Model* model, View* view)
//{
//	this->model = model;
//	this->view = view;
//}
//
//void Controller::setView(View* view)
//{
//	this->view = view;
//}
//
//void Controller::setTemperature(float temp)
//{
//
//}
//
//float Controller::getTemperature() const
//{
//	return 0.00f;
//}

/*
int main()
{
	Model* model = new Model;
	View* view = new View;

	Controller controller(model, view);

	controller.run();

	delete model;
	delete view;
	return 0;
}
*/
