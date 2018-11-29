#include <iostream>
#include "dice_set.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();

    bool found = false;

    std::vector<int> winnerNumbers(6,6);
    int counter = 0;

    while(!found)
    {
        diceSet.roll();
        if(diceSet.getCurrent() == winnerNumbers)
        {
            found = true;
        }
        counter++;
    }
    std::cout <<" I had to roll " << counter << " times.";




    return 0;
}