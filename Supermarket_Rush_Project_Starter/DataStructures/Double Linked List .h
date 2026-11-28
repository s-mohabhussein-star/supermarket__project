#pragma once
#include "Node .h"

template <typename T>
class DoublyLinkedList {
private:
    DNode<T>* head;
    DNode<T>* tail;
    int count;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), count(0) {}

    ~DoublyLinkedList() {
        clear();
    }

    bool isEmpty() const {
        return count == 0;
    }

    int getSize() const {
        return count;
    }

    void insertEnd(T val) {
        DNode<T>* newNode = new DNode<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    bool removeNode(DNode<T>* target) {
        if (!target || isEmpty()) return false;

        if (target == head && target == tail) {
            head = tail = nullptr;
        }
        else if (target == head) {
            head = head->next;
            head->prev = nullptr;
        }
        else if (target == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        }
        else {
            target->prev->next = target->next;
            target->next->prev = target->prev;
        }

        delete target;
        count--;
        return true;
    }

    DNode<T>* getHead() const {
        return head;
    }

    void clear() {
        DNode<T>* curr = head;
        while (curr != nullptr) {
            DNode<T>* temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = tail = nullptr;
        count = 0;
    }
};
