#pragma once
#include <string>
#include <iostream>
#include "Authorization.h"
#include "ResourceFactory.h"
#include "authenticationInfo.h"
#include "Authenticator.h"
#include "View.h"
using namespace std;

class Subject
{
private: 
	std::string username;
	std::string password;
	
	/// For authorization: ///
	int id;
	Resource *r;
	///


public:
	Subject(std::string a, std::string pass);
	Subject();
	std::string getUsername();
	std::string getPassword();

	///For authorization ///
	Subject(int a) : id(a) {}
	int getId() { return id; };
	Resource* getResource(int resourceID)
	{
		resourceFactory* rf = new resourceFactory();
		r = rf->accessResource(resourceID, getId());
		delete rf;
		return;

	}
};

Subject::Subject(std::string aUsername, std::string apass) : username(aUsername), password(apass)
{
}

Subject View::LoginMenu()
{
	std::string username;
	std::string password;
	cout << "\nEnter Username: ";
	cin >> username;
	cout << "\nEnter Password: ";
	cin >> password;
	Subject s(username, password);
	return s;
}




string Subject::getUsername() { return username; };
string Subject::getPassword() { return password; };


