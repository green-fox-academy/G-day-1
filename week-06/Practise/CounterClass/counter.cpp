#include "counter.h"

Counter::Counter() {
    _value = 0;
}

Counter::Counter(int value) {
    _value = value;
}

int Counter::add() {
    _value++;
}

int Counter::add(int number) {
    _value+=number;
}

int Counter::get() {
    return _value;
}

void Counter::reset() {
    _value = 0;
}


