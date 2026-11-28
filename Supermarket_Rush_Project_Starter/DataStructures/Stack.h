#pragma once
#include "Node .h"

template <typename T>
class LinkedStack {
private:
    Node<T>* topNode;
    int count;

public:
    // Constructor
    LinkedStack() : topNode(nullptr), count(0) {}

    // Destructor
    ~LinkedStack() {
        clear();
    }

    // Checks if the stack is empty
    bool isEmpty() const {
        return topNode == nullptr;
    }

    // Returns the number of elements
    int getSize() const {
        return count;
    }

    // Pushes an element onto the top of the stack
    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }

    // Removes the top element and stores it in topElement; returns false if empty
    bool pop(T& topElement) {
        if (isEmpty()) return false;
        Node<T>* temp = topNode;
        topElement = topNode->data;
        topNode = topNode->next;
        delete temp;
        count--;
        return true;
    }

    // Retrieves the top element without removing it; returns false if empty
    bool peek(T& topElement) const {
        if (isEmpty()) return false;
        topElement = topNode->data;
        return true;
    }

    // Clears all elements from the stack
    void clear() {
        T dummy;
        while (!isEmpty()) {
            pop(dummy);
        }
    }
};
