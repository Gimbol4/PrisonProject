#include "main.h"

class Prison {
public:
	int prisoner;
	int chamber;
	string guard;
	string name_of_prison;
};

int main(void) {
	Prison prison;

	cout << "Input a name of prison: ";
	cin >> prison.name_of_prison;

	cout << "Input quantity of prisoners: ";
	cin >> prison.prisoner;

	cout << "Input quantity of chambers: ";
	cin >> prison.chamber;

	cout << "Input a name of today's guard: ";
	cin >> prison.guard;


	return 0;
}