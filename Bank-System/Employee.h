#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Person.h"
using namespace std;
class Employee : public Person
{
protected:
	//Attributes:
	double salary;
public:
	//Constructors:
	const Employee() {
		double salary = 0;
	}
	Employee(int id, string name, string password, double salary) : Person(id, name, password) {
		setID(id);
		setName(name);
		setPassword(password);
		setSalary(salary);
	}
	//Setters:
	void setSalary(double salary) {
		this->salary = salary;
	}
	//Getters:
	double getSalary() {
		return this->salary;
	}
	//Methods:

};