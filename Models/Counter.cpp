#include "Counter.h"

Counter::Counter()
    : counterNumber(0), type('S'), openTime(0), breakAfter(0),
      breakDuration(0), customersServedSinceBreak(0),
      state(NOT_OPEN), busyUntil(-1), breakUntil(-1),
      currentCustomer(nullptr) {}
