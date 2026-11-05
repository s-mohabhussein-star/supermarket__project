#include "Transaction.h"

Transaction::Transaction()
    : transactionNumber(0), customerID(0), counterNumber(0),
      finishTime(0), lines(nullptr), lineCount(0), billTotal(0) {}

Transaction::~Transaction()
{
    delete[] lines;
}
