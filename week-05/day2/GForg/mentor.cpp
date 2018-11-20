#include "mentor.h"
#include <string>

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender),
                                                                               _level(level) {
    _level = level;
}

Mentor::Mentor() : Person("Jane Doe", 30, Gender::FEMALE) {
    Level::INTERMEDIATE;
}

std::string Mentor::leveltoString() {
    if(_level == Level::JUNIOR) {
        return "junior";
    }else if(_level == Level::INTERMEDIATE) {
        return "intermediate";
    }else if(_level == Level::SENIOR) {
        return "senior";
    }
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << gendertoString() << " " << leveltoString() <<
    " mentor" << std::endl;

}
std::string Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}


