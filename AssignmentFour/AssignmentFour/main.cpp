#include"Plane.h"

int main(void)
{
	Plane myPlane(5, 6);
	int answer;
	int classChoice;
	int companions;
	int seatChoice;

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
			cin >> classChoice;

			if (classChoice == 1) {
				cout << "1: Just me" << endl;
				cout << "2: Me and another" << endl;
				cout << ">> ";
				cin >> companions;
				
				if (companions == 1) {
					cout << "1: Window" << endl;
					cout << "2: Aisle" << endl;
					cout << ">> ";
					cin >> seatChoice;

					if (myPlane.addFirstClass(seatChoice, companions) < 0)
						cout << "Couldn't find seat.";
				}
				else {
					if (myPlane.addFirstClass(1, 2) < 0)
						cout << "Couldn't find seat.";
				}
			}
			
			else if (classChoice == 2) {
				cout << "1: Just me" << endl;
				cout << "2: Me and another" << endl;
				cout << "3: Me and two others" << endl;
				cout << ">> ";
				cin >> companions;
				
				if (companions == 1) {
					cout << "1: Window" << endl;
					cout << "2: Middle" << endl;
					cout << "3: Aisle" << endl;
					cout << ">> ";
					cin >> seatChoice;

					if (myPlane.addEconomyClass(seatChoice, companions) < 0)
						cout << "Couldn't find seat.";
				}
				else if (companions == 2) {
					if (myPlane.addEconomyClass(1, companions) < 0)
						cout << "Couldn't find seat.";
				}
				else if (companions == 3) {
					if (myPlane.addEconomyClass(1, companions) < 0)
						cout << "Couldn't find seat.";
				}
				else {
					cout << "Invalid Input." << endl;
				}
			}

			else {
				cout << "Invalid input" << endl;
			}
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