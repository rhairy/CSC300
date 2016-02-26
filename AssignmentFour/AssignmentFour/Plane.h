#pragma once

#include<vector>
#include"FirstClassRow.h"
#include"EconomyClassRow.h"

class Plane
{
public:
	Plane(int numFCRows, int numECRows) : m_FirstClass(numFCRows), m_EconomyClass(numECRows) {}
	void showSeating()
	{
		for (vector<EconomyClassRow>::reverse_iterator it = m_EconomyClass.rbegin();
		it != m_EconomyClass.crend(); it++)
		{
			it->print();
		}
		for (vector<FirstClassRow>::reverse_iterator it = m_FirstClass.rbegin(); 
		it != m_FirstClass.rend(); it++)
		{
			it->print();
		}
	}
	int addFirstClass(int pref, int companions)
	{
		if (pref == 1 && companions == 1) {
			for (vector<FirstClassRow>::iterator it = m_FirstClass.begin();
				 it != m_FirstClass.end(); it++)
			{
				if (!it->isRightWindowOccupied()) {
					it->setRightWindowOccupied();
					return 0;
				}
				else if (!it->isLeftWindowOccupied()) {
					it->setLeftWindowOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
				 return -1;
		}
		else if (pref == 2 && companions == 1) {
			for (vector<FirstClassRow>::iterator it = m_FirstClass.begin();
			it != m_FirstClass.end(); it++)
			{
				if (!it->isRightAisleOccupied()) {
					it->setRightAisleOccupied();
					return 0;
				}
				else if (!it->isLeftAisleOccupied()) {
					it->setLeftAisleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
		else if (companions == 2) {
			for (vector<FirstClassRow>::iterator it = m_FirstClass.begin();
			it != m_FirstClass.end(); it++) {
				if (!it->isRightWindowOccupied() && !it->isRightAisleOccupied()) {
					it->setRightWindowOccupied();
					it->setRightAisleOccupied();
					return 0;
				}
				else if (!it->isLeftWindowOccupied() && !it->isLeftAisleOccupied()) {
					it->setLeftWindowOccupied();
					it->setLeftAisleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
	} 
	int addEconomyClass(int pref, int companions)
	{
		if (pref == 1 && companions == 1) {
			for (vector<EconomyClassRow>::iterator it = m_EconomyClass.begin();
			it != m_EconomyClass.end(); it++)
			{
				if (!it->isRightWindowOccupied()) {
					it->setRightWindowOccupied();
					return 0;
				}
				else if (!it->isLeftWindowOccupied()) {
					it->setLeftWindowOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
		else if (pref == 2 && companions == 1) {
			for (vector<EconomyClassRow>::iterator it = m_EconomyClass.begin();
			it != m_EconomyClass.end(); it++)
			{
				if (!it->isRightMiddleOccupied()) {
					it->setRightMiddleOccupied();
					return 0;
				}
				else if (!it->isLeftMiddleOccupied()) {
					it->setLeftMiddleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
		else if (pref == 3 && companions == 1) {
			for (vector<EconomyClassRow>::iterator it = m_EconomyClass.begin();
			it != m_EconomyClass.end(); it++)
			{
				if (!it->isRightAisleOccupied()) {
					it->setRightAisleOccupied();
					return 0;
				}
				else if (!it->isLeftAisleOccupied()) {
					it->setLeftAisleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
		else if (companions == 2) {
			for (vector<EconomyClassRow>::iterator it = m_EconomyClass.begin();
			it != m_EconomyClass.end(); it++) {
				if (!it->isRightWindowOccupied() && !it->isRightAisleOccupied()) {
					it->setRightWindowOccupied();
					it->setRightAisleOccupied();
					return 0;
				}
				else if (!it->isLeftWindowOccupied() && !it->isLeftAisleOccupied()) {
					it->setLeftWindowOccupied();
					it->setLeftAisleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
		else if (companions == 3) {
			for (vector<EconomyClassRow>::iterator it = m_EconomyClass.begin();
			it != m_EconomyClass.end(); it++) {
				if (!it->isRightWindowOccupied() && !it->isRightMiddleOccupied() && !it->isRightAisleOccupied()) {
					it->setRightWindowOccupied();
					it->setRightMiddleOccupied();
					it->setRightAisleOccupied();
					return 0;
				}
				else if (!it->isLeftWindowOccupied() && !it->isLeftMiddleOccupied() && !it->isLeftAisleOccupied()) {
					it->setLeftWindowOccupied();
					it->setLeftMiddleOccupied();
					it->setLeftAisleOccupied();
					return 0;
				}
				else {
					continue;
				}
			}
			return -1;
		}
	}
private:
	vector<FirstClassRow> m_FirstClass;
	vector<EconomyClassRow> m_EconomyClass;
};

