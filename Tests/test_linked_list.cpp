#include "../DataStructures/LinkedList.h"
#include <iostream>

int main()
{
    LinkedList<int> numbers;
    numbers.insertBack(10);
    numbers.insertBack(20);
    numbers.insertFront(5);

    std::cout << "List size should be 3: " << numbers.size() << '\n';

    int removed = 0;
    numbers.removeFront(removed);
    std::cout << "Removed front should be 5: " << removed << '\n';
    return 0;
}
