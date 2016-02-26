#pragma once

#include"Seat.h"

class EconomyClassRow
{
public:
	void print()
	{
		if (m_rWindow.isOccupied()) {
			cout << "X";
		}
		else {
			cout << "O";
		}
		if (m_rMiddle.isOccupied()) {
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
		if (m_lMiddle.isOccupied()) {
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
	bool isRightMiddleOccupied() { return m_rMiddle.isOccupied(); }
	bool isRightAisleOccupied() { return m_rAisle.isOccupied(); }
	bool isLeftAisleOccupied() { return m_lAisle.isOccupied(); }
	bool isLeftMiddleOccupied() { return m_lMiddle.isOccupied(); }
	bool isLeftWindowOccupied() { return m_lWindow.isOccupied(); }

	void setRightWindowOccupied() { m_rWindow.setOccupied(); }
	void setRightMiddleOccupied() { m_rMiddle.setOccupied(); }
	void setRightAisleOccupied() { m_rAisle.setOccupied(); }
	void setLeftAisleOccupied() { m_lAisle.setOccupied(); }
	void setLeftMiddleOccupied() { m_lMiddle.setOccupied(); }
	void setLeftWindowOccupied() { m_lWindow.setOccupied(); }
private:
	Seat m_lWindow;
	Seat m_lMiddle;
	Seat m_lAisle;
	Seat m_rWindow;
	Seat m_rMiddle;
	Seat m_rAisle;

};
