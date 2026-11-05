#include "Product.h"

Product::Product()
    : productID(0), name(""), category(""), unitPrice(0), stock(0) {}

Product::Product(int id, const string& productName, const string& productCategory,
                 int price, int initialStock)
    : productID(id), name(productName), category(productCategory),
      unitPrice(price), stock(initialStock) {}
