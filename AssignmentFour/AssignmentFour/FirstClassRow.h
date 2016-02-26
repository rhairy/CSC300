#pragma once
#include"Seat.h"

class FirstClassRow
{
public:
	FirstClassRow() {}

	void print()
	{
		if (m_rWindow.isOccupied()) {
			cout << "X";
		}
		else {
			cout << "O";
		}
		if (m_rAisle.isOccupied()) {
			cout << "X";
		}
		else {
			cout << "O";
		}
		cout << " ";
		if (m_lAisle.isOccupied()) {
			cout << "X";
		}
		else {
			cout << "O";
		}
		if (m_lWindow.isOccupied()) {
			cout << "X";
		}
		else {
			cout << "O";
		}
		cout << "\n";
	} 
	bool isRightWindowOccupied() { return m_rWindow.isOccupied(); }
	bool isRightAisleOccupied() { return m_rAisle.isOccupied(); }
	bool isLeftAisleOccupied() { return m_lAisle.isOccupied(); }
	bool isLeftWindowOccupied() { return m_lWindow.isOccupied(); }

	void setRightWindowOccupied() { m_rWindow.setOccupied(); }
	void setRightAisleOccupied() { m_rAisle.setOccupied(); }
	void setLeftAisleOccupied() { m_lAisle.setOccupied(); }
	void setLeftWindowOccupied() { m_lWindow.setOccupied(); }
private:
	Seat m_rWindow;
	Seat m_rAisle;
	Seat m_lAisle;
	Seat m_lWindow;
	
	//vector<Seat> m_seats;
};

