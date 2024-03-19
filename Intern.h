#ifndef INTERN_H
#define INTERN_H

class Intern : public Employee {
public:
    Intern(const std::string& firstName, const std::string& lastName);
    void IntroduceYourself() const override;
};

#endif
