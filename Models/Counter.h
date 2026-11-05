#ifndef COUNTER_H
#define COUNTER_H

#include "../DataStructures/Queue.h"

class Customer;

enum CounterState
{
    NOT_OPEN,
    FREE,
    BUSY,
    ON_BREAK
};

class Counter
{
public:
    int counterNumber;
    char type;                 // 'E' Express or 'S' Standard
    int openTime;
    int breakAfter;
    int breakDuration;
    int customersServedSinceBreak;

    CounterState state;
    int busyUntil;
    int breakUntil;
    Customer* currentCustomer;

    Queue<Customer*> regularQueue;

    Counter();
};

#endif
