#include "CustomerManager.h"

CustomerManager::CustomerManager() {}

CustomerManager::~CustomerManager()
{
    // TODO: delete each Customer exactly once.
}

Customer* CustomerManager::findCustomerByID(int id)
{
    (void)id;
    // TODO: linear search.
    return nullptr;
}

Customer* CustomerManager::createCustomer(int id, char type, int checkInTime)
{
    (void)id; (void)type; (void)checkInTime;
    // TODO: allocate once, store pointer in customers, return the same pointer.
    return nullptr;
}
