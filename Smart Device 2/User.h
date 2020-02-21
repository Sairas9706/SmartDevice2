//#pragma once
//#include <iostream>
//#include <string>			///Using strings
//
//using namespace std;
//
//class User    //// Same process might be needed for the different sensors
//{
//public:
//	void initialise()
//	{
//		cout << "User Initializing \n";
//		cout << "Loading preferences...\n";
//
//		cout << "Done! \n";
//	}
//
//	bool isAdmin()
//	{
//		return false;
//	}
//	void authenticate()							//Authenticate function to call   //// Authenticator Pattern ////
//	{
//		cout << "Please enter a username: \n";
//		string username;
//		cin >> username;
//		cout << "Please enter a password: \n";
//		string password;
//		cin >> password;
//
//		//Check wether details are correct
//		//Return value indicating success or failure
//	}
//
//	//feature
//
//private:
//
//	std::string name;
//	double distance;
//	//static int
//
//private:
//	string username = "";
//	uint16_t permissionLevel = 0;  // Indicate for a guest, normal user
//	uint17_t permissionLevel = 1;  // Indicate for normal admin
//	uint18_t permissionLevel = 2;  // SuperMega Admin
//	double GetDistance() {return distance;}   ///Call for distance, and returns it at the same time protect the data
//
//};
