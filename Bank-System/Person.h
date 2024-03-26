#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class Person
{
protected:
	//Attributes:
	int id;
	string name,password;
public:
	//Constructor:
	 Person() {
		int id = 0;
	}
	Person(int id,string name,string password){
			setID(id);
			setName(name);
			setPassword(password);
	}
	//Setters:
	void setID(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	void setPassword(string password) {
		this->password = password;
	}
	//Getters:
	int getID() {
		return this->id;
	}
	string getName() {
		return this->name ;
	}
	string getPassword() {
		return this->password ;
	}
};