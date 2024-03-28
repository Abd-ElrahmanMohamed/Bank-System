#include <iostream>
#include <string>
#include "Client.h";
#include "Employee.h";
#include "Admin.h";
using namespace std;
int main()
{
    Client client(101, "Mohamed", "password", 1500);
    client.display();
    cout << "\n==================================\n" << endl;

    Employee employee(201, "AbdElrahman", "password", 6000);
    employee.display();
    cout << "\n==================================\n" << endl;

    Admin admin(301, "AdminUser", "adminpass", 10000);
    admin.display();
}