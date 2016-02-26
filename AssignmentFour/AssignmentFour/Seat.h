#pragma once

#include<iostream>
#include"Passenger.h"

using namespace std;

class Seat
{
public:
	Seat()
	{
		this->m_occupied = false;
	}
	void setOccupied() { this->m_occupied = true; }
	bool isOccupied() const { return m_occupied; }
private:
	Passenger m_passenger;
	bool m_occupied;
};

