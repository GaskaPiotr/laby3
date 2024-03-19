#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee(const std::string& firstName, const std::string& lastName, double salary)
    : firstName(firstName), lastName(lastName), salary(salary) {}


void Employee::IntroduceYourself() const {
    std::cout << "Hello, I am " << firstName << " " << lastName << ". ";
}

double Employee::GetSalary() const {
    return salary;
}
