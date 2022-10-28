#include "Airplane.h"

Airplane::Airplane() {
	weight = 0;
	numPassengers = 0;
}
Airplane::Airplane(int w,int p) {
	weight = w;
	numPassengers = p;
	
}


void Airplane::reducePassengers(int x) {
	if (numPassengers - x < 0) {
		numPassengers = 0;
	}
	else {
		numPassengers = numPassengers - x;
	}

}
int Airplane::get_numPassengers() {
	return numPassengers;
}