#ifndef UNDERGRAD_H_INCLUDED
#define UNDERGRAD_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Object class that holds an undergraduate student's name, tuition per course, and number of classes.
class undergrad
{
public:
	undergrad();
	undergrad(string studName, double studTuition, int  numClasses);
	void setName(string newName);
	void setTuition(double newTuition);
	void setClasses(int newClasses);
	string getName() const;
	double getTuition() const;
	int getClasses() const;
	double totalTuition() const;
private:
	string name;
	double tuition;
	int classes;
};

inline undergrad::undergrad() { name = "None"; tuition = 0.0; classes = 0; }
inline undergrad::undergrad(string studName, double studTuition, int numClasses) { name = studName, tuition = studTuition, classes = numClasses; }
inline void undergrad::setName(string newName) { name = newName; }
inline void undergrad::setTuition(double newTuition) { tuition = newTuition; }
inline void undergrad::setClasses(int newClasses) { classes = newClasses; }
inline string undergrad::getName() const { return name; }
inline double undergrad::getTuition() const { return tuition; }
inline int undergrad::getClasses() const { return classes; }
double undergrad::totalTuition() const { double total = tuition * classes; return total; }

#endif