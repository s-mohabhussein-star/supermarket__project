#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using std::string;

class Product
{
public:
    int productID;
    string name;
    string category;
    int unitPrice;
    int stock;

    Product();
    Product(int id, const string& productName, const string& productCategory,
            int price, int initialStock);
};

#endif
