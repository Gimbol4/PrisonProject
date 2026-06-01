#include "Prison.h"

Prison::Prison() {
	prisoner = 0;
	chambers = 0;
	guard = "";
	name_of_prison = "";
}

Prison::Prison(int prs, int chmb) {
	prisoner = prs;
	chambers = &chmb;
	guard = "";
	name_of_prison = "";
}

Prison::Prison(int prs, int chmb, string nmgr, string nop) {
	prisoner = prs;
	chambers = &chmb;
	guard = nmgr;
	name_of_prison = nop;
}

Prison::Prison(const Prison& prison) {
	prisoner = prison.prisoner;
	chambers = new int[3];
	guard = prison.guard;
	name_of_prison = prison.name_of_prison;
}

Prison::~Prison() {
	delete[] chambers;
}

string Prison::getName() {
	return name_of_prison;
}

void Prison::setName(string nop) {
	name_of_prison = nop;
}

int* Prison::getchamberss() {
	return chambers;
}

void Prison::setchamberss(int* chmb, int c) {
	if (chambers != NULL) {
		delete[] chambers;
		chambers = new int[c];

		for (int i = 0; i < c; i++)
		{
			chambers[i] = chmb[i];
		}
		count = c;
	}
}

int Prison::getPrisoner() {
	return prisoner;
}

void Prison::setPrisoner(int prs) {
	if (prs > -1) {
		prisoner = prs;
	}
}

string Prison::getGuard() {
	return guard;
}

void Prison::setGuard(int grnm) {
	guard = grnm;
}



string Prison::toString() {
	string s = "Prison: ";
	s += name_of_prison + '\n';
	s += "Amount of prisoners = " + to_string(prisoner) + '\n';
	s += "Numbers of chamberss = " + to_string(chambers[0]) + ", " + to_string(chambers[1]) + ", " + to_string(chambers[2]);
	s += "Name of today's guard = " + guard + '\n';
	return s;
}