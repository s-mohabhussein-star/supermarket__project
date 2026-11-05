#ifndef TRANSACTION_H
#define TRANSACTION_H

class TransactionLine
{
public:
    int productID;
    int acceptedQuantity;
    int unitPriceUsed;

    TransactionLine()
        : productID(0), acceptedQuantity(0), unitPriceUsed(0) {}
};

class Transaction
{
public:
    int transactionNumber;
    int customerID;
    int counterNumber;
    int finishTime;

    TransactionLine* lines;
    int lineCount;
    long long billTotal;

    Transaction();
    ~Transaction();

    // TODO: define copy policy because lines is a pointer.
};

#endif
