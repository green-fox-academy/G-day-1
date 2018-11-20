#ifndef GFORG_MENTOR_H
#define GFORG_MENTOR_H
#include <iostream>
#include "person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor : public Person {

public:
    Mentor();
    Mentor(const std::string &name, int age, Gender gender, Level level);

    void introduce() override;
    std::string getGoal() override;
    std::string leveltoString();

protected:

    Level _level;


};


#endif
