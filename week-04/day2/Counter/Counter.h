#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

class Counter {
public:
    Counter();
    Counter(int num);

    Counter(int num, int inum);

    void add();
    void add(int num);

    void reset();

    int get();

private:
    int _num;
    int _inum;
};


#endif //COUNTER_COUNTER_H