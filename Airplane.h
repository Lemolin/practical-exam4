#ifndef AIRPLANE_H

#define AIRPLANE_H

#include<iostream>
#include"AirCraft.h"

using namespace std;

class Airplane :public AirCraft{



private:



	int weight;

	int numPassengers;



public:

	Airplane();
	Airplane(int w,int p);

	void reducePassengers(int x);
	int get_numPassengers();

};

#endif
