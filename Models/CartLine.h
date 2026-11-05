#ifndef CARTLINE_H
#define CARTLINE_H

// One requested product line in a customer's cart.
class CartLine
{
public:
    int productID;
    int requestedQuantity;

    CartLine() : productID(0), requestedQuantity(0) {}
    CartLine(int id, int quantity) : productID(id), requestedQuantity(quantity) {}
};

#endif
