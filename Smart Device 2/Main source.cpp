/// 17070546 >  Smart Car System ////
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "Model.h"

using namespace std;
int userObject;
//Logger loggingFile;		//if i decide to make file to look up, and use for initalizing

const uint16_t MENU_QUIT = 99;

uint16_t mainMenu()
{
	//read input, as long as it isnt exi, then display choice.
	uint16_t input = 0;
	system("cls");
	cout << "Welcome to Smart Car system ";
	cout << "Select from the following options: ";
	cout << "........................................";
	cout << "1: Information about model";
	//if not authorized
	cout << "2. Log in ";
	cout << "9. Quit ";
	//else if authorized

	cout << "Your choice :";
	cin >> input;
	return input;


}

void startup()			//Takes care of initializing, breaking down the program to smaller steps
{
	cout << "Starting system...\n";
	cout << "Initializing users...\n";
	//load user
	//userObject initialise();				//User object

	cout << "Initialzing logger...";
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
	// When we sart the program we should look for settings file
	//if no settings file, we initialize
	//start up the sensors passing the setings file so they can initalize
	//present user with a menu

	startup();
	uint16_t u18_userChoice = 0;			//This might need editing

	while (u18_userChoice != MENU_QUIT) {				//In source file for users, create a user with the same name. Look up how
		u18_userChoice = mainMenu();
	}

	//Securely Close everything and log off

	cout << "Thank you! Goodbye Human!  \n";

}