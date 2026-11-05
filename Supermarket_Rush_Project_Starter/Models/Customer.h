#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "CartLine.h"

enum CustomerState
{
    WAITING,
    IN_SERVICE,
    DONE,
    LEFT,
    UNSERVED,
    UNDONE
};

class Customer
{
public:
    int customerID;
    char type;                 // 'R' Regular or 'E' Express
    int checkInTime;

    CartLine* cart;            // dynamically allocated cart lines
    int cartLineCount;

    int assignedCounter;
    int startTime;
    int finishTime;
    int waitingTime;
    int serviceTime;
    int acceptedItems;
    long long billTotal;

    CustomerState state;

    Customer();
    ~Customer();

    // TODO: implement safe cart allocation/copy policy.
    // Do not accidentally shallow-copy the cart pointer.
};

#endif
