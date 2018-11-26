#ifndef GFORG_STUDENT_H
#define GFORG_STUDENT_H
#include <iostream>
#include "person.h"

class Student : public Person {

public:
    void introduce()  override;
    std::string getGoal()  override;
    void skipDays(int numberofDays);
    Student();
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

protected:
    std::string _previousOrganization;
    int _skippedDays;




};


#endif
