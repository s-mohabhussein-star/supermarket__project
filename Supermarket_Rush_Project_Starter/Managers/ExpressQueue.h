#ifndef EXPRESSQUEUE_H
#define EXPRESSQUEUE_H

#include "../DataStructures/LinkedList.h"

class Customer;

// One shared Express waiting list, kept in priority order.
// The assignment asks the team to design and justify a priority equation
// using check-in timestamp and number of items.
class ExpressQueue
{
private:
    LinkedList<Customer*> waitingCustomers;

public:
    ExpressQueue();

    void insertByPriority(Customer* customer);
    Customer* getNextCustomer();
    bool removeCustomer(Customer* customer);
    bool isEmpty() const;
    int size() const;

    // TODO: agree on the priority equation and tie-break rule as a team.
    // Do not copy Customer objects; store Customer*.
};

#endif
