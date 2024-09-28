#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Validation
{
public:
    // name:
    static void valiName(string &name)
    {
        while (name.length() < 5 || name.length() > 20)
        {
            cout << "Name must be between 5 to 20 letters! Please enter again: ";
            cin >> name;
        }
        for (char ch : name)
        {
            if (!isalpha(ch))
            {
                cout << "The name must contain letters only! Please enter again :";
                cin >> name;
            }
        }
    }

    // password:
    static void valiPassword(string &password)
    {
        while (password.length() < 5 || password.length() > 20)
        {
            cout << "Password must be between 5 to 20 characters! Please enter again: ";
            cin >> password;
        }
    }

    // balance:
    static void valiBalance(double &balance)
    {
        while (balance < 1500)
        {
            cout << "Minimum balance is 1500! Please enter again: ";
            cin >> balance;
        }
    }

    // salary:
    static void valiSalary(double &salary)
    {
        while (salary < 5000)
        {
            cout << "Minimum salary is 5000! Please enter again: ";
            cin >> salary;
        }
    }
};
