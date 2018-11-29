#ifndef COUNTERCLASS_COUNTER_H
#define COUNTERCLASS_COUNTER_H


class Counter {
public:
    Counter();
    
    Counter(int value);
    int add();
    int add(int number);
    int get();
    void reset();


private:
    int _value;

};

#endif
