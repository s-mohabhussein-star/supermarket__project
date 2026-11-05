#ifndef QUEUE_H
#define QUEUE_H

// FIFO queue implemented with linked nodes.
// For Regular queues, the team will also need a remove-by-customer operation.
// A linked-list traversal can find that customer in O(n).
template <typename T>
class Queue
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int count;

public:
    Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}
    ~Queue() { clear(); }

    Queue(const Queue&) = delete;
    Queue& operator=(const Queue&) = delete;

    bool isEmpty() const { return frontNode == nullptr; }
    int size() const { return count; }

    void enqueue(const T& value)
    {
        Node* node = new Node(value);
        if (rearNode == nullptr)
            frontNode = rearNode = node;
        else
        {
            rearNode->next = node;
            rearNode = node;
        }
        ++count;
    }

    bool dequeue(T& removedValue)
    {
        if (isEmpty()) return false;

        Node* old = frontNode;
        removedValue = old->data;
        frontNode = frontNode->next;
        if (frontNode == nullptr) rearNode = nullptr;
        delete old;
        --count;
        return true;
    }

    T* peek()
    {
        return frontNode == nullptr ? nullptr : &frontNode->data;
    }

    // TODO for Pair 2:
    // Add removeValue(const T& target) so Leave/Urgent can remove a
    // particular waiting customer from the middle of a Regular queue.

    void clear()
    {
        while (frontNode != nullptr)
        {
            Node* old = frontNode;
            frontNode = frontNode->next;
            delete old;
        }
        rearNode = nullptr;
        count = 0;
    }
};

#endif
