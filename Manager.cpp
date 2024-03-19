#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& firstName, const std::string& lastName, double salary, int numberOfSubordinates)
    : Employee(firstName, lastName, salary), numberOfSubordinates(numberOfSubordinates) {}

void Manager::IntroduceYourself() const {
    Employee::IntroduceYourself();
    std::cout << "I am a manager and I have " << numberOfSubordinates << " subordinates." << std::endl;
}
