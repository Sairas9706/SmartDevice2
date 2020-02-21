#pragma once
#include <iostream>
#include <string>
#include "Subject.h"
#include "Authenticator.h"
#include <map>					//dditional Necessary library 
#include <utility>				//additional necessary library

using namespace std;

// Authentication info class
class authenticationInfo
{
private: 
	std::map<std::string, std::string> Users;  /// UserID password

public:
	authenticationInfo();    //constructor sets attributes
	bool validateUser(std::string name, std::string password);
};

authenticationInfo::authenticationInfo()  //this should be retrieved from a file/database (only hardcoded here for simplicity)
{
	Users.insert(pair<string, string>("saif", "saif123"));
	Users.insert(pair<string, string>("Joel", "Joel123"));
	Users.insert(pair<string, string>("Jack", "jack123"));
};

bool authenticationInfo::validateUser(string name, string pass)
{
	bool validUser = false;
	std::map<string, string>::iterator it;
	it = Users.find(name);
	if (it != Users.end())
	{
		if (!(it->second.compare(pass)))
		{
			validUser = true;
		}
	}
	return validUser;
}