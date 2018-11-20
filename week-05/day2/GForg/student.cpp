#include "student.h"
#include "person.h"



Student::Student() : Person("Jane Doe", 30, Gender::FEMALE) {
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}


void Student::introduce()  {
    std::cout <<  "Hi, I'm " << _name << " a " << _age << " year old " << stringtoGender() << " from " << _previousOrganization << " who skipped " << _skippedDays << " days from the course already." << std::endl;

}

std::string Student::getGoal()  {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}



Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization,
                 int skippedDays):Person(name, age, gender) {

    _previousOrganization = previousOrganization;
    _skippedDays = skippedDays;

}

void Student::skipDays(int numberofDays) {
    _skippedDays = _skippedDays + numberofDays;


}


