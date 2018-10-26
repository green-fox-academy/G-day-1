#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

   int hoursinseconds = 14 * 60 * 60;
   int minutesinseconds = 34 * 60;

   int onedayinseconds = 24 * 60 * 60;

   std::cout << onedayinseconds - (hoursinseconds + minutesinseconds + currentSeconds) << std::endl;


    return 0;
}