/// 17070546 >  Smart Car System ////
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "Model.h"
#include "authenticationInfo.h"
#include "Authenticator.h"
#include "Authorization.h"
#include "Subject.h"


using namespace std;
int userObject;
//Logger loggingFile;		//if i decide to make file to look up, and use for initalizing

const uint16_t MENU_QUIT = 4;

void startup()			//Takes care of initializing, breaking down the program to smaller steps
{
	cout << "Starting system...\n";
	cout << "Initializing users...\n";
	//load user
//userObject.initialise();				//User object
//userObject.authenticate();

	cout << "Initialzing logger... \n";
	//load logger
											//loggingFile.initialize();		//if u decide to use a file, find it, initizalize from it

	cout << "Initializing sensor 1...\n";
	//load sensor 1

	cout << "Inizializing sensor 2...\n";
	//load sensor 2

	cout << "Initializing sensor 3... \n";
	//load sensor 3

	cout << "\nSystem Startup Complete \n";
	system("pause");
}

int main()
{
	//start up the sensors passing the setings file so they can initalize
	//present user with a menu

	startup();
	uint16_t userChoice = 0;			//unsigned int

	while (userChoice != MENU_QUIT)
	{			
		userChoice = mainMenu();
	}

	//Securely Close everything and log off

	cout << "Thank you! Goodbye Human!  \n";

	//////////////////////////////////////////////

	int subjectID = 1;
	int resourceID = 1;
	Subject* s = new Subject(subjectID);
	Resource* r = nullptr;
	r = reinterpret_cast<Resource*>(s->getResource(resourceID));
	if (r != nullptr)
		cout << "\nSecret = " << r->getDeemedWorthy() << endl;
	cout << endl;
	system("pause");

	//////////////////////////////////////////////
	/// The field below is for preseting class view, controller, and model
	
	Model* model = new Model;
	View* view = new View;
	Controller controller(model, view);
	controller.run();

	delete model;
	delete view;
	return 0;

	//////////////////////////////////////////////

}

