#ifndef GFORG_PERSON_H
#define GFORG_PERSON_H
#include <iostream>
#include <string>

enum class Gender{
    MALE,
    FEMALE
};
class Person {

public:

    virtual void introduce();
    virtual std::string getGoal();

    Person();
    Person(const std::string &name, int age, Gender gender);
    std::string gendertoString();

protected:
    std::string _name;
    int _age;
    Gender _gender;














};


#endif
