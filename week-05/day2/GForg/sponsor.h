#ifndef GFORG_SPONSOR_H
#define GFORG_SPONSOR_H
#include "person.h"

class Sponsor : public Person {
public:
    Sponsor();

    Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents);


    void introduce() override;
    std::string getGoal() override;

protected:
    std::string _company;
    int _hiredStudents;
    int _hire();



};


#endif
