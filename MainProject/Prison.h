#include <iostream>
#include <string>

using namespace std;

class Prison {
private:
	int number_of_prisoner;
	int* chambers;
	string guard;
	string name_of_prison;

public:

	Prison();
	Prison(int prs, int chmb);
	Prison(int prs, int chmb, string nmgr, string nop);
	Prison(const Prison& prison);
	~Prison();
	string getName();
	void setName(string nop);
	int* getchamberss();
	void setchamberss(int* chmb, int c);
	int getPrisoner();
	void setPrisoner(int prs);
	string getGuard();
	void setGuard(int grnm);
	string toString();
};