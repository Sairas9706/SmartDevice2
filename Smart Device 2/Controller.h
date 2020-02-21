/// 17070546 > smart device  ////
// Controller: Controls the view and the model,
//Accepts input and converts it to command for the model or view.
//

#pragma once
#include <iostream>
#include "Model.h"
#include <string>
#include "View.h"
#include "Subject.h"
#include <random>

using namespace std;

class Controller
{
public:
		Controller(Model* model, View* view);
		
		void SetView(View* view);

		void setTemperature(float temp);				// Data to be modified depending on sensors (this is an example for temperature

		float getTemperature() const;

		void run();

private:
	Model* model;
	View *view
};

Controller::Controller(Model* model, View* view)
{
	this->model = model;
	this->view = view;
}

void Controller::SetView(View* view)
{
	this->view = view;
}

void Controller::setTemperature(float temp)
{
	model->setTemprature(temp);
}

float Controller::getTemperature() const
{
	return model->getTemperature();
}

void Controller::run()
{
	uint16_t userChoice = 0;
	while (userChoice != MENU_QUIT)
	{
		userChoice = view->mainMenu();
		switch (userChoice)
		{
		case 1: //Shows model details
			view->printModelDetails(model);
			break;
		case 2:
			//Log in
			s = view->mainMenu();
			a.authenticateUSer(s);
			break;
		case 3:
			//simulation
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

void Controller::simulate()
{
	float temp = 0;
	//Example dummy simulation
	for (unsigned i = 1; i < 24; i++)
	{
		temp = getTemperature();
		view->simulationOutput(i, temp);
		std::this_thread::sleep_for(std);
		//
		//more code in processing the data
		//

	}
}




