#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Employee : public Person
{
protected:
	//Attributes:
	double salary;
public:
	//Constructors:
	Employee(int id, string name, string password, double salary) : Person(id, name, password) {
		setID(id);
		setName(name);
		setPassword(password);
		setSalary(salary);
	}
	//Setters:
	void setSalary(double salary) {
		if (salary >= 5000)
			this->salary = salary;
		else
			cout << "Minimum salary requirement not met. Salary must be at least 5000." << endl;
	}
	//Getters:
	double getSalary() {
		return salary;
	}
	//Methods:
	void display() {
		Person::display();
		cout << "Salary : " << salary << endl;
	}
};