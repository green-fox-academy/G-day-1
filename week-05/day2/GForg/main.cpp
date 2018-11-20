#include <iostream>
#include "person.h"
#include "student.h"
#include <vector>

int main()
{


    Person mark("Mark", 46, Gender::MALE);
    mark.introduce();

    Student csicska("banat", 33, Gender::FEMALE, "BME", 3);
    csicska.introduce();








    return 0;
}