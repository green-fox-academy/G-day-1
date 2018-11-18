#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H
#include <iostream>
class Counter {

public:

    Counter(int num, int inum);

    void add(int num);
    void add();
    void get();
    void reset();





private:
    int _num;
    int _inum;


};


#endif