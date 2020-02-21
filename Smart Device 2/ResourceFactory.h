#pragma once
#include <string>
#include <iostream>
#include "Authorization.h"

using namespace std;

class resourceFactory
{
public:
	Resource* accessResource(int resourceID, int subjectID)
	{
		return Resource::newResource(resourceID, subjectID);
	}
};
