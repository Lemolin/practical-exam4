#include "AirCraft.h"


AirCraft::AirCraft(int w) {
	weight = w;
	fuel = 1.0;
	numberOfFlights = 0;

}


void AirCraft::set_fuel(float f) {
	fuel = f;
}

void AirCraft::set_weight(int v) {
	weight = v;
}

void AirCraft::set_numberOfFlights(int n) {
	numberOfFlights = n;
}

int AirCraft::get_weight() {
	return weight;
}

float AirCraft::get_fuel() {
	return fuel;
}

int AirCraft::get_numberOfFlights() {
	return numberOfFlights;
}



void AirCraft::refuel() {
	fuel = 1.0;
}