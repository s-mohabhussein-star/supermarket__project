#include "Customer.h"

Customer::Customer()
    : customerID(0), type('R'), checkInTime(0),
      cart(nullptr), cartLineCount(0), assignedCounter(-1),
      startTime(-1), finishTime(-1), waitingTime(0),
      serviceTime(0), acceptedItems(0), billTotal(0),
      state(WAITING) {}

Customer::~Customer()
{
    delete[] cart;
}
