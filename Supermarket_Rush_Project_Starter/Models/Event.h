#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "CartLine.h"
using std::string;

// One input instruction at one timestamp.
// Fields not used by a particular event type should remain at safe defaults.
class Event
{
public:
    char eventType;            // C, L, U, A, D, M, R, F, G, O, Z
    int timestamp;

    // Customer-event data
    char customerType;
    int customerID;
    CartLine* cartLines;
    int cartLineCount;

    // Product-event data
    int productID;
    string name;
    string category;
    int price;
    int stockOrQuantity;

    // Sort-event data
    char sortKey;              // P = price, S = stock
    char sortOrder;            // A = ascending, D = descending

    Event();
    ~Event();

    // TODO: define copy policy because cartLines is a pointer.
};

#endif
