#pragma once
#include "Node .h"

template <typename T>
class LinkedQueue {
private:
    Node<T>* frontNode;
    Node<T>* rearNode;
    int count;

public:
    // Constructor
    LinkedQueue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

    // Destructor
    ~LinkedQueue() {
        clear();
    }

    // Checks if the queue is empty
    bool isEmpty() const {
        return frontNode == nullptr;
    }

    // Returns the number of elements
    int getSize() const {
        return count;
    }

    // Adds an element to the rear of the queue
    void enqueue(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            frontNode = rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        count++;
    }

    // Removes the front element and stores it in frontElement; returns false if empty
    bool dequeue(T& frontElement) {
        if (isEmpty()) return false;
        Node<T>* temp = frontNode;
        frontElement = frontNode->data;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete temp;
        count--;
        return true;
    }

    // Retrieves the front element without removing it; returns false if empty
    bool peek(T& frontElement) const {
        if (isEmpty()) return false;
        frontElement = frontNode->data;
        return true;
    }

    // function to remove a specific element from the middle or end of the queue (for Leave or Escalation events)
    bool remove(T targetVal) {
        if (isEmpty()) return false;

        if (frontNode->data == targetVal) {
            T dummy;
            return dequeue(dummy);
        }

        Node<T>* curr = frontNode;
        while (curr->next != nullptr && curr->next->data != targetVal) {
            curr = curr->next;
        }

        if (curr->next == nullptr) return false;

        Node<T>* temp = curr->next;
        curr->next = temp->next;
        if (temp == rearNode) {
            rearNode = curr;
        }
        delete temp;
        count--;
        return true;
    }

    // Clears all elements from the queue
    void clear() {
        T dummy;
        while (!isEmpty()) {
            dequeue(dummy);
        }
    }
};
