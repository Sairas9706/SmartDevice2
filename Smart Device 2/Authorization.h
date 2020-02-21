#pragma once
#include <iostream>
#include <string>
#include "subject.h"
#include <map>

using namespace std;

//////// Creation of Resource class //////////
class Resource
{
private:
	int id;
	string deemedWorthy;

public:
	static Resource* newResource(int resourceID, int subjectID)
	{
		Permission *p = new Permission();
		if (p->checkPermission(resourceID, subjectID))
		{
			cout << "Access granted\n";
			return new Resource(resourceID);
		}
		else
		{
			cout << "No access\n";
			return nullptr;
		}
	}
	int getId() { return id; };
	string getDeemedWorthy()
		{
			return deemedWorthy;
		}
};


////// Creation of Permission class //////////

class Permission
{
private:
	map<int, int> userAccessType;
	map<int, int> resourceAccessType;
	Resource* pResource;					//Pointer for resource
	Subject* pSubject;						//Pointer for Subject

public:
	Permission()
	{
		userAccessType[1] = 1;
		userAccessType[2] = 0;
		userAccessType[3] = 2;
		userAccessType[4] = 1;
		resourceAccessType[1] = 1;
		resourceAccessType[2] = 1;
		resourceAccessType[3] = 1;
		resourceAccessType[4] = 1;			///Since defined as "int", gotta be numbers

	}
	bool checkPermission(int resourceID, int subjectID)
	{
		if (resourceAccessType[resourceID] == userAccessType[subjectID])
			return true;
		else return false;
	}

	Resource* accessResource(int resourceID, int subjectID)
	{
		if (checkPermission(resourceID, subjectID))
		{
			cout << "Access Granted M'lord";
			return new Resource(resourceID);
		}
		else cout << "no access";
		return nullptr;
	}

};
