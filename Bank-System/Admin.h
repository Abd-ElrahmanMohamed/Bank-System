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
		this->id = id;
		this->name = name;
		this->password = password;
		this->salary = salary;
	}
	//Methods:
	void display() {
		Employee::display();
	}
};