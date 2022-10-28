#include "AirFleet.h"


AirFleet::AirFleet() {
	fleet = new AirCraft * [5];
}

	

AirCraft** AirFleet::get_fleet() {
	return fleet;
}

int AirFleet::get_count() {
	return count;
}