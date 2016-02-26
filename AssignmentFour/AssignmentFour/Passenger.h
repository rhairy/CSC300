#pragma once

#include<iostream>

using namespace std;

class Passenger
{
public:
	Passenger() { m_name = ""; }
	Passenger(string name) : m_name(name) {}
	string getName() const { return this->m_name; }
private:
	string m_name;
};

