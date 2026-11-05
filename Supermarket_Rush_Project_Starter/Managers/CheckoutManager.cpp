#include "CheckoutManager.h"

CheckoutManager::CheckoutManager() {}

CheckoutManager::~CheckoutManager()
{
    // TODO: decide and document ownership; if CheckoutManager owns counters,
    // delete each Counter exactly once here.
}

bool CheckoutManager::addCounter(Counter* counter)
{
    (void)counter;
    // TODO: add pointer to dynamic array.
    return false;
}

Counter* CheckoutManager::getCounter(int index)
{
    Counter** slot = counters.get(index);
    return slot == nullptr ? nullptr : *slot;
}

int CheckoutManager::getCounterCount() const
{
    return counters.size();
}
