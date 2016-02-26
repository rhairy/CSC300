#include"Plane.h"

int main(void)
{
	Plane myPlane(5);
	int answer;
	int seatChoice;
	int companions;

	cout << "Welcome to Randy Airlines Booking." << endl;

	while (1) {
		cout << "1: Show available seating " << endl;
		cout << "2: Book a seat" << endl;
		cout << "9: quit" << endl;
		cout << ">> ";
		cin >> answer;

		if (answer == 1) {
			myPlane.showSeating();
		}
		else if (answer == 2) {

			cout << "1: First Class" << endl;
			cout << "2: Economy" << endl;
			cout << ">> ";
			cin >> seatChoice;
			
			if (seatChoice > 2) {
				break;
			}

			cout << "1: Just me" << endl;
			cout << "2: Me and another" << endl;
			cout << "3: Me and two others" << endl;
			cout << ">> ";
			cin >> companions;

			if (seatChoice == 1 && companions > 2 ) {
				cout << "If you're in first class you cannot have more than a single companion." << endl;
				break;
			}

			myPlane.addFirstClass(seatChoice, companions);
		}
		else if (answer == 9) {
			return -1;
		}
		else {
			cout << "Invalid Input." << endl;
		}
	}
	return 0;
}