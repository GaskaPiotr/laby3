#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    int numberOfSubordinates;

public:
    Manager(const std::string& firstName, const std::string& lastName, double salary, int numberOfSubordinates);
    void IntroduceYourself() const override;
    friend void ChangeSalary(Employee& employee, double newSalary);
};

#endif
