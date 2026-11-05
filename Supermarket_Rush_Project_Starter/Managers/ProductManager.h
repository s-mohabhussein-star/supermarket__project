#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "../DataStructures/LinkedList.h"
#include "../Models/Product.h"

class ProductManager
{
private:
    LinkedList<Product*> products; // list nodes store pointers; Product objects are owned here

public:
    ProductManager();
    ~ProductManager();

    Product* findProductByID(int id);
    Product* findProductByName(const string& exactName);

    bool addProduct(Product* product);
    bool deleteProduct(int id);
    bool updateProduct(int id, int newPrice, int newStock);
    bool restockProduct(int id, int quantity);

    // TODO: create a temporary Product* array and sort pointers.
    // Do not copy Product objects or change the catalogue's linked-list order.
};

#endif
