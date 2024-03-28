#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;
class Person
{
protected:
	//Attributes:
	int id;
	string name,password;
public:
	//Constructor:
	Person(int id,string name,string password){
		setID(id);
		setName(name);
		setPassword(password);
	}
	//Setters:
	void setID(int id) {
		this->id = id;
	}
	void setName(string& name) {
		if (Validation::isAlpha(name))
			this->name = name;
		else
			cout << "Invalid name format. Name must contain only alphabetic characters and be between 5 and 20 characters long." << endl;
	}
	void setPassword(string& password) {
		if (Validation::isValidPassword(password))
			this->password = password;
		else
			cout << "Invalid password format. Password must be between 8 and 20 characters long." << endl;
	}
	//Getters:
	int getID() {
		return id;
	}
	string getName() {
		return name ;
	}
	string getPassword() {
		return password;
	}
	//Methods:
	virtual void display() {
		cout << "ID : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Pass : " << password << endl;
	}
};