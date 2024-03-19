#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string firstName;
    std::string lastName;
    double salary;

public:
    Employee(const std::string& firstName, const std::string& lastName, double salary);
    virtual void IntroduceYourself() const;
    double GetSalary() const;
    virtual void SetSalary(double newSalary) = 0;
};

#endif
