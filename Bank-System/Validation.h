#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation {
public:
    static bool isValidName(const string& name) {
        return name.size() >= 5 && name.size() <= 20 && isAlpha(name);
    }

    static bool isValidPassword(const string& password) {
        return password.size() >= 8 && password.size() <= 20;
    }

    static bool isValidBalance(double balance) {
        return balance >= 1500;
    }

    static bool isAlpha(const string& newName) {
        for (char c : newName) {
            if (!isalpha(c)) {
                return false;
            }
        }
        return true;
    }
};