#ifndef AIRCRAFT_H

#define AIRCRAFT_H

#include<iostream>

using namespace std;

class AirCraft {



protected:



	int weight;

	float fuel;

	int numberOfFlights;



public:


	AirCraft(int w);

	void set_fuel(float f);

	void set_weight(int v);

	void set_numberOfFlights(int n);

	int get_weight();

	float get_fuel();

	int get_numberOfFlights();

	void refuel();

	virtual void fly(int headwind, int minutes) = 0;

};

#endif


