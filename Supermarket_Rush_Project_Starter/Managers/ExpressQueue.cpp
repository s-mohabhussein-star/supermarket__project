#include "ExpressQueue.h"

ExpressQueue::ExpressQueue() {}

void ExpressQueue::insertByPriority(Customer* customer)
{
    (void)customer;
    // TODO: traverse and insert at the correct priority position.
}

Customer* ExpressQueue::getNextCustomer()
{
    // TODO: remove and return the first pointer in priority order.
    return nullptr;
}

bool ExpressQueue::removeCustomer(Customer* customer)
{
    (void)customer;
    // TODO: remove matching pointer.
    return false;
}

bool ExpressQueue::isEmpty() const
{
    return waitingCustomers.isEmpty();
}

int ExpressQueue::size() const
{
    return waitingCustomers.size();
}
