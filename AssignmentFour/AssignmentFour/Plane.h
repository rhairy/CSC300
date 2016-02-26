#pragma once

#include<vector>
#include"FirstClassRow.h"

class Plane
{
public:
	Plane(int numFCRows) : m_FirstClass(numFCRows) {}
	void showSeating()
	{
		for (vector<FirstClassRow>::reverse_iterator it = m_FirstClass.rbegin(); 
			 it != m_FirstClass.rend(); it++)
		{
			it->print();
		}
	}
	void addFirstClass(int pref, int num)
	{
		if (pref == 1 && num == 1) {
			for (vector<FirstClassRow>::iterator it = m_FirstClass.begin();
				 it != m_FirstClass.end(); it++)
			{
				if (!it->isRightWindowOccupied()) {
					it->setRightWindowOccupied();
					return;
				}
				else if (!it->isLeftWindowOccupied()) {
					it->setLeftWindowOccupied();
					return;
				}
				else {
					continue;
				}
			}
		}
		else {

		}
	} 
private:
	vector<FirstClassRow> m_FirstClass;
};

