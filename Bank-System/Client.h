#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
using namespace std;
class Client : public Person
{
private:
	//Attributes:
	double balance;
public:
	//Constructors:
	Client(int id, string name, string password, double balance) : Person(id, name, password) {
		setID(id);
		setName(name);
		setPassword(password);
		setBalance(balance);
	}
	//Setters:
	void setBalance(double balance) {
		if (balance >= 1500)
			this->balance = balance;
		else
			cout << "Minimum balance requirement not met. Balance must be at least 1500." << endl;
	}
	//Getters:
	double getBalance() {
		return balance;
	}
	//Methods:
	void checkBalance() {
		cout << "Current Balance : " << balance << endl;
	}
	void deposit(int amount) {
		balance += amount;
	}
	void withdraw(int amount) {
		if (balance - amount >= 1500) {
			balance -= amount;
		}
		else
			cout << "Insufficient balance. Minimum balance requirement not met." << endl;
	}
	void transferTo(int amount, Client& c) {
		if (balance - amount >= 1500) {
			balance -= amount;
			c.deposit(amount);
			cout << "Transfer successful." << endl;
		}
		else {
			cout << "Insufficient balance. Minimum balance requirement not met." << endl;
		}
	}
	//Methods:
	void display(){
		Person::display();
		cout << "Balance : " << balance << "$" << endl;
		}
};