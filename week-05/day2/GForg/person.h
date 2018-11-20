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

    Person(const std::string &name, int age, Gender gender);

    virtual void introduce();
    virtual std::string getGoal();
    std::string gendertoString();

protected:

    std::string _name;
    int _age;
    Gender _gender;














};


#endif
