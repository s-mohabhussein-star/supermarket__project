#include "../DataStructures/Stack.h"
#include <iostream>

int main()
{
    Stack<int> history;
    history.push(100);
    history.push(200);

    int undone = 0;
    history.pop(undone);
    std::cout << "First popped value should be 200: " << undone << '\n';
    return 0;
}
