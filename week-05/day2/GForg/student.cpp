#include "student.h"
#include "person.h"



Student::Student() : Person("Jane Doe", 30, Gender::FEMALE) {
    previousOrganization = "The School of Life";
    skippedDays = 0;
}


void Student::introduce()  {
    std::cout <<  "Hi, I'm " << _name << " a " << _age << " year old " << stringtoGender() << " from " << previousOrganization << " who skipped " << skippedDays << " days from the course already." << std::endl;

}

std::string Student::getGoal()  {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberofDays) {
    skippedDays = skippedDays + numberofDays;
    }




