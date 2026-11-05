#include "Event.h"

Event::Event()
    : eventType('\0'), timestamp(0), customerType('\0'), customerID(-1),
      cartLines(nullptr), cartLineCount(0), productID(-1),
      name(""), category(""), price(0), stockOrQuantity(0),
      sortKey('\0'), sortOrder('\0') {}

Event::~Event()
{
    delete[] cartLines;
}
