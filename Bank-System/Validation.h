#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation {
public:
    //Methods:
    static bool ValidateName(string name) {
 
        for (char c : name) {
            if (!isalpha(c))
                return false;
        }
        return (name.length() >= 5 && name.length() <= 20);
    }

    static bool ValidatePassword(string password) {
        
        return (password.length() >= 8 && password.length() <= 20);
    }
};