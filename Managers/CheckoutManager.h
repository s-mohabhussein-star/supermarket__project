#ifndef CHECKOUTMANAGER_H
#define CHECKOUTMANAGER_H

#include "../DataStructures/DynamicArray.h"
#include "../Models/Counter.h"

class CheckoutManager
{
private:
    DynamicArray<Counter*> counters;

public:
    CheckoutManager();
    ~CheckoutManager();

    bool addCounter(Counter* counter);
    Counter* getCounter(int index);
    int getCounterCount() const;

    // TODO: find the best counter for a Regular customer according to the assignment:
    // load = waiting queue size + (1 if busy or on break);
    // ties: Standard before Express, then smaller counter number.
};

#endif
