#pragma once
#ifndef Data_H
#define Data_H
#include <iostream>

#include <string>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Validation.h"

using namespace std;


class DataSourceInterface {
public:
    virtual ~DataSourceInterface() {}

    // Abstract functions that must be implemented by concrete classes
    virtual void addClient(const Client& client) = 0;
    virtual void addEmployee(const Employee& employee) = 0;
    virtual void addAdmin(const Admin& admin) = 0;

    virtual vector<Client> getAllClients() = 0;
    virtual vector<Employee> getAllEmployees() = 0;
    virtual vector<Admin> getAllAdmins() = 0;

    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

#endif
