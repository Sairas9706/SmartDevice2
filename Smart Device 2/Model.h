#pragma once
/// 17070546 > smart device > sensors ////
#include <iostream>
#include <string>
	//source file here, make one and call it in if needed
using namespace std;

class Model			
{
public:
	Model() { retrieveDataFromDatabase(); }
	const std::string getName() const;
	void setName(const std::string name);

	float getTemperature() const;

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

class View
{
public:
	void printModelDetails(Model* m) const;

	uint16_t mainMenu()
	{}//Unsigned integer
};

void View::printModelDetails(Model* m) const
{
	cout << "-----------------------------------------------------" << endl;
	cout << "Model Name: " << m->getName() << endl;
	cout << "Temperature: " << m->getTemperature() << endl;
	cout << "-----------------------------------------------------" << endl;

};

class Controller
{
public:
	Controller(Model* model, View* view);				// USage of pointer
	void setView(View* view);

	void setTemperature(float temp);

	float getTemperature() const;

	void run();


	//asdkasdkasd
private:
	Model* model;
	View* view;
};

Controller::Controller(Model* model, View* view)
{
	this->model = model;
	this->view = view;
}

void Controller::setView(View* view)
{
	this->view = view;
}

void Controller::setTemperature(float temp)
{

}

float Controller::getTemperature() const
{

}

//void Controller::setTemperature(float temp)
//{
//	model->setTemperature(temp);
//}

//float Controller::getTemperature() const
//{
//	return model->getTemperature();
//}

void Controller::run()
{
	uint16_t choice = 1;
	while (choice != 9)
	{
		choice = view->mainMenu();
		switch (choice)
		{
		case 1: //Shows model details
			view->printModelDetails(model);
			break;
		case 2: //Log in
			break;
		case 3: //Simulate
			break;
			////
			////
			//// Contine to meny options>...
			////

		default:
			break;
		}
	}
}

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

