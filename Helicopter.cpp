#include "Helicopter.h"



int Helicopter::heliID = 0;



Helicopter::Helicopter(int w,string n):AirCraft(w) {
	weight = w;
	name = n;
	craftID = heliID;
	heliID++;
	
}

string Helicopter::set_name(string n) {
	name = n;

}

string Helicopter::get_name() {
	return name;
}

int Helicopter::get_craftID() {
	return craftID;
}

void Helicopter::set_craftID(int k) {
	craftID = k;
}