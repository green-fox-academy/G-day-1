#include <string>
#include "sponsor.h"

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents)
        : Person(name, age, gender), _company(company), _hiredStudents(hiredStudents) {
    }

Sponsor::Sponsor() : Person("Jane Doe", 30, Gender::FEMALE) {
    _company = "Google";
    _hiredStudents = 0;
}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << " a " << _age << " year old " << gendertoString() << " who represents " <<
    _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

std::string Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

int Sponsor::_hire() {
    _hiredStudents++;
}