#include <iostream>
#include <string>
#include "Client.h";
#include "Employee.h";
#include "Admin.h";
using namespace std;
int main()
{
    Client client(1, "Mohamed", "password", 2000);
    client.display();
    client.deposit(500);
    client.checkBalance();
    client.withdraw(1000);
    client.checkBalance();
    cout << "\n==================================\n" << endl;

    Employee employee(101, "Abd_Elrahman", "password", 6000);
    employee.display();
    cout << "\n==================================\n" << endl;

    Admin admin(201, "Admin User", "adminpass", 10000);
    admin.display();

    return 0;
}