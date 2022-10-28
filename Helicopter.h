#ifndef HELICOPTER_H

#define HELICOPTER_H



// Include the required header files.

#include "AirCraft.h"

#include<string>

using namespace std;



class Helicopter : public AirCraft

{



private:



	string name;
	int craftID;

	static int heliID;



public:




	Helicopter(int w,string n);

	string set_name(string n);

	string get_name();

	int get_craftID();

	void set_craftID(int k);

};

#endif
