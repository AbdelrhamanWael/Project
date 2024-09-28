#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Validation.h"
#include <string>

using namespace std;

class Person
{
protected:
    // attributes:
    string name;
    string password;
    int id;

public:
    Person()
    {
        this->id = 0;
    }
    Person(string name, string password, int id)
    {
        this->name = name;
        this->password = password;
        this->id = id;
    }
};

class Client : public Person
{
private:
    // attribute:
    double balance;

public:
    // constractor:
    Client()
    {
        this->balance = 0;
    };
    Client(string name,int id ,  double balance,string password)
        : Person(name, password, id)
    {

        Validation::valiBalance(balance);

        this->balance = balance;
    }

    // setter:
    void setName(string name)
    {

        Validation::valiName(name);

        this->name = name;
    }

    void setPassword(string password)
    {
        Validation::valiPassword(password);

        this->password = password;
    }
    void setBalance(double balance)
    {
        Validation::valiBalance(balance);

        this->balance = balance;
    }
    void setId(int id)
    {
        this->id = id;
    }

    // getter:
    string getName()
    {
        return this->name;
    }
    string getPassword()
    {
        return this->password;
    }
    double getBalance()
    {
        return this->balance;
    }
    int getId()
    {
        return this->id;
    }

    // method:
    void deposit(double amount)
    {
        balance += amount;
        cout << " The deposit amount   : " << amount << endl;
        cout << " The current balance  : " << balance << endl;

        cout << "----------------------------\n";
    }

    void withdraw(double amount)
    {
        if (balance < amount)
        {
            cout << " Your balance is less than the amount you want to withdraw !" << endl;
            return;
        }

        balance -= amount;
        cout << " The withdrawn amount : " << amount << endl;
        cout << " The current balance  : " << balance << endl;

        cout << "----------------------------\n";
    }
    void transferTo(double amount, Client &recipient)
    {
        if (balance < amount)
        {
            cout << " Your balance is less than the amount you want to withdraw !" << endl;
            return;
        }

        balance -= amount;
        recipient.balance += amount;
        cout << " The amount transfered To : " << amount << endl;
        cout << " The current balance      : " << balance << endl;

        cout << "----------------------------\n";
    }
    void checkBalance()
    {
        cout << " The current balance : " << balance << endl;
        cout << "----------------------------\n";
    }

    // display:
    void Displayclientinfo()
    {
        cout << "       welcome :-   " << endl
             << endl;
        cout << " Name     : " << name << endl;
        cout << " password : ************" << endl;
        cout << " id       : " << id << endl;
        cout << " Balance  : " << balance << endl;
        cout << "----------------------------\n";
    }
};
#endif