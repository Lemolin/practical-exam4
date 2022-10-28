#ifndef AIRPLANE_H

#define AIRPLANE_H

#include<string>
#include<iostream>
#include"Airplane.h"
#include"Helicopter.h"
using namespace std;



class AirFleet
{

public:


	AirFleet();
	void addAirCraft(AirCraft* aircraft);

	AirCraft** get_fleet();
	int get_count();

private:
	int count;
	AirCraft** fleet;
};

#endif
