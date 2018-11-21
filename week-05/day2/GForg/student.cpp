#include "student.h"
#include "person.h"
#include <string>

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization):Person(name, age, gender), _previousOrganization(previousOrganization) {

    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

Student::Student() : Person() {
    _name = "Jane Doe";
    _age = 30;
    Gender::FEMALE;
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}


void Student::introduce()  {
    std::cout <<  "Hi, I'm " << _name << " a " << _age << " year old " << gendertoString() << " from " << _previousOrganization << " who skipped " << _skippedDays << " days from the course already." << std::endl;

}

std::string Student::getGoal()  {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberofDays) {
    _skippedDays = _skippedDays + numberofDays;


}


