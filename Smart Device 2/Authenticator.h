#pragma once
#include <string>
#include "authenticationInfo.h"
#include "Authenticator.h"
#include "Authorization.h"
#include "Builder.h"
#include "Builder.h"
#include "Model.h"
#include "Subject.h"


// Authenticator class
using namespace std;

class authenticator
{
public:
	authenticator();
	bool authenticateUser(Subject &s);
};

authenticator::authenticator(){};

bool authenticator::authenticateUser(Subject& s)
{
	authenticationInfo ainfo;
	string username = s.getUsername();       //import Username from subject
	string pass = s.getPassword();
	bool authenticated = false;
	if (ainfo.validateUser(username, pass))
	{
		cout << "\nWelcome! ";
		cout << "\nAuthenticated!\n";
		authenticated = true;
	}//if

	else
		cout << "Invalid username or password. Please try again.  ";
	return authenticated;
}; //end function authenticatorUser

