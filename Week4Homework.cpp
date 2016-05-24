#include <iostream>
#include <string>
#include <vector>
#include "employee.h"
#include "undergrad.h"
#include "grad.h"
using namespace std;

//Creates a dynamically allocated array, asks the user for a number of inputs,
//and then accepts that many inputs into the array. Calls the findAverage method,
//and prints the results.
void dynamicArray()
{
	int n = 0;
	double *a;
	a = new double[n];
	employee e;
	
	cout << "How many numbers would you like to enter? (At least 5): ";
	cin >> n;
	if (n < 5)
	{
		cout << "Please enter at least 5 numbers: ";
		cin >> n;
	}
	cout << "Enter the numbers separated by spaces: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "The average is: " << e.findAverage(a, n) << endl;
}

void employeeDriver() //#1-A
{
	vector<employee> myEmployee(5);
	employee lEmp;
	string localName = "None";
	double localSalary = 0.0;

	for (int i = 0; i < myEmployee.size(); i++)
	{
		cout << "Enter the employee's name: ";
		cin >> localName;
		myEmployee[i].setName(localName);
		cout << "Enter the employee's salary: ";
		cin >> localSalary;
		myEmployee[i].setSalary(localSalary);
		salaryIncrease(myEmployee); //#1-B
		cout << "Employee's salary after raise: " << myEmployee[i].getSalary() << endl;
	}	

}

void undergradDriver()
{
	undergrad x;
	x.setName("Duane");
	x.setTuition(1950.50);
	x.setClasses(4);
	
	cout << "Student: " << x.getName() << endl
		<< "Tuition per class: " << x.getTuition() << endl
		<< "Number of classes: " << x.getClasses() << endl
		<< "Total tuition: " << x.totalTuition() << endl;
}

void gradDriver()
{
	grad y; undergrad x;
	
	y.setName("Tom");
	y.setTuition(2195.00);
	y.setClasses(5);
	y.setFees(975.50);

	cout << "Student: " << y.getName() << endl
		<< "Tuition per class: " << y.getTuition() << endl
		<< "Number of classes: " << y.getClasses() << endl
		<< "Total fees: " << y.getFees() << endl
		<< "Total tuition: " << y.totalTuition() << endl;
}
int main()
{
	employeeDriver();
	undergradDriver();
	gradDriver();

	system("PAUSE");
    return 0;
}

