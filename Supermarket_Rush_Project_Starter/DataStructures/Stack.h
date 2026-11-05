#ifndef STACK_H
#define STACK_H

// LIFO stack. The most recently pushed transaction is popped first.
template <typename T>
class Stack
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& value, Node* link) : data(value), next(link) {}
    };

    Node* topNode;
    int count;

public:
    Stack() : topNode(nullptr), count(0) {}
    ~Stack() { clear(); }

    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;

    bool isEmpty() const { return topNode == nullptr; }
    int size() const { return count; }

    void push(const T& value)
    {
        topNode = new Node(value, topNode);
        ++count;
    }

    bool pop(T& removedValue)
    {
        if (isEmpty()) return false;
        Node* old = topNode;
        removedValue = old->data;
        topNode = topNode->next;
        delete old;
        --count;
        return true;
    }

    T* top()
    {
        return topNode == nullptr ? nullptr : &topNode->data;
    }

    void clear()
    {
        while (topNode != nullptr)
        {
            Node* old = topNode;
            topNode = topNode->next;
            delete old;
        }
        count = 0;
    }
};

#endif
