#include "../DataStructures/DynamicArray.h"
#include <iostream>

int main()
{
    DynamicArray<int> values;
    values.add(7);
    values.add(14);
    values.add(21);

    std::cout << "Third value should be 21: " << values[2] << '\n';
    return 0;
}
