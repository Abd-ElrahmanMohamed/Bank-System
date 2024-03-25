#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Person.h"
using namespace std;
class Empolyee : public Person
{
protected:
	//Attributes:
	double salary;
public:
	//Constructors:
	Empolyee() {
		double salary = 0;
	}
	Empolyee(int id, string name, string password, double salary) : Person(id, name, password) {
		setID(id);
		setName(name);
		setPassword(password);
		setSalary(salary);
	}
	//Setters:
	void setSalary(double salaey) {
		this->salary = salary;
	}
	//Getters:
	double getSalary() {
		return this->salary;
	}
	//Methods:

};