/// 17070546 > smart device  ////
// View is user interface
// knows how to communicate with the end user, multiple views of the same information are possible
//

#pragma once
#include <iostream>
#include "Model.h"
#include <string>
#include "Controller.h"

using namespace std;


class View
{
public:
		void printModelDetails(Model* m) const;

	uint16_t mainMenu();
};

void View::printModelDetails(Model *m) const
{
	system("cls");
	cout << "-----------------------------------------------------" << endl;
	cout << "Model Name: " << m->getName() << endl;
	cout << "Temperature: " << m->getTemperature() << endl;
	cout << "-----------------------------------------------------" << endl;


}

uint16_t mainMenu()
{
	//read input, as long as it isnt exit, then display choice.
	uint16_t input = 0;
	cout << "Welcome to Smart Car system \n";
	cout << "Select from the following options: \n";
	cout << "........................................\n";
	cout << "1: Information about model \n";
	//if not authorized
	cout << "2. Log in \n";
	cout << "9. Quit \n";
	cout << "Your choice: ";
	
	cin >> input;
	return input;

}

