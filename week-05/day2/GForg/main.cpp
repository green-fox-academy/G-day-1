#include <iostream>
#include "person.h"
#include "student.h"
#include "mentor.h"
#include <vector>
#include "sponsor.h"
int main()
{


    Person mark("Mark", 46, Gender::MALE);
    mark.introduce();

    Student csicska("banat", 33, Gender::FEMALE, "BME", 3);
    csicska.introduce();

    Mentor baromfi("névtelen mentor", 22, Gender::FEMALE, Level::INTERMEDIATE);
    baromfi.introduce();

    Sponsor dik("richie rich", 55, Gender::MALE, "SAP", 33);
    dik.introduce();







    return 0;
}