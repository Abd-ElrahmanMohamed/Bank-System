#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include"Empolyee.h"
using namespace std;
class Admin : public Empolyee
{
public:
	//Constructor:
	Admin() {
		double salary = 0;
	}
	Admin(int id, string name, string password, double salary) :Empolyee(id, name, password, salary) {
		setID(id);
		setName(name);
		setPassword(password);
		setSalary(salary);
	}
	//Methods:

};