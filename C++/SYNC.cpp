
#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"
#include"Admin.h"
#include "Client.h"
#include "Data.h"

using namespace std;


int main(){

    string name;
    string password;
    int balance;
    int id;
    int choice;
    string clientName;
    int clientId;
    double clientBalance;
    string Clientpassword;

Employee e;

    double salary;

    cout << "Enter Employee Name: ";
    cin >> name;
    e.setName(name);

    cout << "Enter Employee ID: ";
    cin >> id;
    e.setId(id);

    // for searching
    // int clientid;
    // cout << "Enter Client ID: ";
    // cin >> clientid;
    // bool found = e.searchClient(clientid);

    // if (found)
    // {
    //     cout << "Client Already Exist" << endl;
    // }
    // else
    // {
    //     cout << "Client Not Exist" << endl;
    // }

    cout << "Enter Employee Password: ";
    cin >> password;
    e.setPassword(password);

    cout << "Enter Employee Salary: ";
    cin >> salary;
    e.setSalary(salary);
    cout << "===========================================" << endl;



    cout << "Do Do you want to add a client? (1. Yes, 2. No)";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter Client Name: ";
    cin >> clientName;

    cout << "Enter Client ID: ";
    cin >> clientId;

    cout << "Enter Client Balance: ";
    cin >> clientBalance;
    cout << "Enter Client Password";
    cin >> Clientpassword;

    Client* client = new Client(clientName, clientId, clientBalance, Clientpassword);

    e.addClient(client);
    



    }
    else
    {
        cout << "No Client Added" << endl;
    }

    ofstream outputFile1("employee_data.txt");

    if (outputFile1.is_open())
    {
        // Write employee data to the file
        outputFile1 << "Employee Name: " << name << endl;
        outputFile1 << "Employee ID: " << id << endl;
        outputFile1 << "Employee Password: " << password << endl;
        outputFile1 << "Employee Salary: " << salary << endl;
        outputFile1 << "=================================================" << endl;
        // Write client data to the file
        outputFile1 << "Client that You added ::" << endl;
        outputFile1 << "Client Name: " << clientName << endl;
        outputFile1 << "Client ID: " << clientId << endl;
        outputFile1 << "Client Balance: " << clientBalance << endl;
        outputFile1 << "Client Password: " << Clientpassword << endl;







        outputFile1.close();
        cout << "data saved Successfully" << endl;
    }
    else
    {
        cout << "Unable to open file";
    }


}
