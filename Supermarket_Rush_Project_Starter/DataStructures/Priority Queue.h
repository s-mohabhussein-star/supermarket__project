#pragma once
#include "Node .h"

template <typename T>
class PriorityQueue {
private:
    PQNode<T>* head;
    int count;

public:
    // Constructor
    PriorityQueue() : head(nullptr), count(0) {}

    // Destructor
    ~PriorityQueue() {
        clear();
    }

    // Checks if the priority queue is empty
    bool isEmpty() const {
        return head == nullptr;
    }

    // Returns the number of elements
    int getSize() const {
        return count;
    }

    // Inserts an element based on its priority (higher priority value is dequeued first)
    void enqueue(T val, int prio) {
        PQNode<T>* newNode = new PQNode<T>(val, prio);

        if (isEmpty() || prio > head->priority) {
            newNode->next = head;
            head = newNode;
        }
        else {
            PQNode<T>* curr = head;
            while (curr->next != nullptr && curr->next->priority >= prio) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }
        count++;
    }

    // Removes the highest priority element and stores it in topElement; returns false if empty
    bool dequeue(T& topElement) {
        if (isEmpty()) return false;
        PQNode<T>* temp = head;
        topElement = head->data;
        head = head->next;
        delete temp;
        count--;
        return true;
    }

    // Retrieves the highest priority element without removing it; returns false if empty
    bool peek(T& topElement) const {
        if (isEmpty()) return false;
        topElement = head->data;
        return true;
    }

    // Clears all elements from the priority queue
    void clear() {
        T dummy;
        while (!isEmpty()) {
            dequeue(dummy);
        }
    }
};

