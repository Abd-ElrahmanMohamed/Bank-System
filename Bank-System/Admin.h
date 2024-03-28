#pragma once
#include <iostream>
#include <string>
#include"Employee.h"
using namespace std;
class Admin : public Employee
{
public:
	//Constructor:
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {
		setID(id);
		setName(name);
		setPassword(password);
		setSalary(salary);
	}
	//Methods:
	void display() {
		Employee::display();
	}
};