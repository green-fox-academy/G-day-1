#ifndef GFORG_STUDENT_H
#define GFORG_STUDENT_H
#include <iostream>
#include "person.h"

class Student : public Person {


public:
    Student();
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization, int skippedDays);



    void introduce()  override;
    std::string getGoal()  override;
    void skipDays(int numberofDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;




};


#endif
