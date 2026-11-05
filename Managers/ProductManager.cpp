#include "ProductManager.h"

ProductManager::ProductManager() {}

ProductManager::~ProductManager()
{
    // TODO: delete each Product object exactly once before list nodes are cleared.
    // Ensure no other module also believes it owns/deletes these Product objects.
}

Product* ProductManager::findProductByID(int id)
{
    // TODO: linear search through products.
    (void)id;
    return nullptr;
}

Product* ProductManager::findProductByName(const string& exactName)
{
    // TODO: linear search through products.
    (void)exactName;
    return nullptr;
}

bool ProductManager::addProduct(Product* product)
{
    // TODO: reject duplicate IDs; otherwise insert the pointer.
    (void)product;
    return false;
}

bool ProductManager::deleteProduct(int id)
{
    // TODO: find product, remove its pointer from the list, then delete the Product once.
    (void)id;
    return false;
}

bool ProductManager::updateProduct(int id, int newPrice, int newStock)
{
    (void)id; (void)newPrice; (void)newStock;
    // TODO: validate ID and non-negative stock, then update.
    return false;
}

bool ProductManager::restockProduct(int id, int quantity)
{
    (void)id; (void)quantity;
    // TODO: validate ID and quantity, then increase stock.
    return false;
}
