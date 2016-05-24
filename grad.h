#ifndef GRAD_H_INCLUDED
#define GRAD_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "undergrad.h"
using namespace std;

//Object class that inherits undergrad but allows the addition of fees and recalculates tuition.
class grad : public undergrad
{
public:
	grad();
	grad(double studFees);
	void setFees(double newFees);
	double getFees() const;
	double totalTuition();
private:
	double fees;
};

inline grad::grad() { fees = 0.0; }
inline grad::grad(double studFees) { fees = studFees; }
inline void grad::setFees(double newFees) { fees = newFees; }
inline double grad::getFees() const { return fees; }
inline double grad::totalTuition()
{	
	return undergrad::totalTuition() + getFees();
}
#endif
