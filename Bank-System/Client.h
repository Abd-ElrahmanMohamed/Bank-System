#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Person.h"
using namespace std;
class Client : public Person
{
private:
	//Attributes:
	double balance;
public:
	//Constructors:
	Client() {
		double balance = 0;
	}
	Client(int id, string name, string password, double balance) : Person(id, name, password) {
		setID(id);
		setName(name);
		setPassword(password);
		setBalance(balance);
	}
	//Setters:
	void setBalance(double balance) {
		this->balance = balance;
	}
	//Getters:
	double getBalance() {
		return this->balance;
	}
	//Methods:
	void checkBalance() {
		cout << "Current Balance : " << balance;
	}
};