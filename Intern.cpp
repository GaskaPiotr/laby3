#include "Intern.h"
#include <iostream>

Intern::Intern(const std::string& firstName, const std::string& lastName)
    : Employee(firstName, lastName, 0) {}

void Intern::IntroduceYourself() const {
    std::cout << "Hello, I am " << firstName << " " << lastName << ". I am an intern." << std::endl;
}
