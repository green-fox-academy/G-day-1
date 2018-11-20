#ifndef GFORG_COHORT_H
#define GFORG_COHORT_H
#include <string>
#include <vector>
#include <iostream>
#include "student.h"
#include "mentor.h"
#include "person.h"

class Cohort {
public:

    Cohort();
    Cohort(std::string name);

    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

protected:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;
};


#endif
