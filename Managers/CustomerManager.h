#ifndef CUSTOMERMANAGER_H
#define CUSTOMERMANAGER_H

#include "../DataStructures/LinkedList.h"
#include "../Models/Customer.h"

class CustomerManager
{
private:
    LinkedList<Customer*> customers; // one owner for each Customer object

public:
    CustomerManager();
    ~CustomerManager();

    Customer* findCustomerByID(int id);
    Customer* createCustomer(int id, char type, int checkInTime);

    // TODO: track waiting/done/left customers without creating duplicate Customer objects.
};

#endif
