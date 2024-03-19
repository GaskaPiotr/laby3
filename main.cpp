#include "Employee.h"
#include "Manager.h"
#include "Intern.h"
#include <iostream>

void ChangeSalary(Employee& employee, double newSalary) {
    std::cout << "Changing salary for employee: " << employee.firstName << " " << employee.lastName << std::endl;
    employee.salary = newSalary;
}

int main() {
    Manager manager("John", "Doe", 5000, 5);
    Intern intern("Alice", "Smith");

    // Test IntroduceYourself method
    manager.IntroduceYourself();
    intern.IntroduceYourself();

    // Test ChangeSalary friend function
    manager.ChangeSalary(intern, 6000);

    return 0;
}
