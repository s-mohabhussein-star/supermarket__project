#include "../DataStructures/Queue.h"
#include <iostream>

int main()
{
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);

    int value = 0;
    q.dequeue(value);
    std::cout << "First dequeued value should be 10: " << value << '\n';
    return 0;
}
