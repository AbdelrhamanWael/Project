#pragma once
#ifndef Employee_H
#define Employee_H
#include <iostream>
#include <string>
#include <vector>
#include "Client.h"
#include "Validation.h"
using namespace std;

class Employee : public Person
{
private:
    double salary;
    
    vector<Client*> clients;

public:

    Employee() { this->salary = 0; }
    
    Employee(string name, string password, int id, double salary,double balance) : Person(name, password, id), salary(salary)  {}

    // getters
    double getSalary()
    {
        return salary;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }

    // setters
    void setSalary(double salary)
    {
        Validation::valiSalary(salary);

        this->salary = salary;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        Validation::valiName(name);

        this->name = name;
        ;
    }
    void setPassword(string password)
    {
        Validation::valiPassword(password);

        this->password = password;
    }

    // add Client
    void addClient(Client* client)
    {
        clients.push_back(client);

    }
    //search
    bool searchClient(int id)
    {
        for (Client* client : clients)
        {
            if (client->getId() == id)
            {
                return true;
            }
        }
        return false;
    }
    //listofclients
    void listofclients()
    {
        for (Client* client : clients)
        {
            client->Displayclientinfo();
        }
    }


    void editClient(int id, string name, string password, double balance){
        for (int i = 0; i < clients.size(); i++)
        {
            if (clients[i]->getId() == id)
            {
                clients[i]->setName(name);
                clients[i]->setPassword(password);
                clients[i]->setBalance(balance);
            }
        }
    }

    


    

        // display
        void DisplayEmployeeinfo()
    {
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "------------------------------------" << endl;
    }
};
#endif