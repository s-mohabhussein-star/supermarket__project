#pragma once
#include "Node .h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int count;

public:
    LinkedList() : head(nullptr), tail(nullptr), count(0) {}

    ~LinkedList() {
        clear();
    }

    bool isEmpty() const {
        return count == 0;
    }

    int getSize() const {
        return count;
    }

    void insertEnd(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    }

    Node<T>* getHead() const {
        return head;
    }

    void clear() {
        Node<T>* curr = head;
        while (curr != nullptr) {
            Node<T>* temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = tail = nullptr;
        count = 0;
    }
};
