#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// A basic singly linked list template.
// This container owns its nodes, NOT the objects pointed to by pointer values.
template <typename T>
class LinkedList
{
private:
    struct Node
    {
        T data;
        Node* next;

        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int count;

public:
    LinkedList() : head(nullptr), tail(nullptr), count(0) {}

    ~LinkedList()
    {
        clear();
    }

    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;

    bool isEmpty() const { return head == nullptr; }
    int size() const { return count; }

    void insertFront(const T& value)
    {
        Node* node = new Node(value);
        node->next = head;
        head = node;
        if (tail == nullptr) tail = node;
        ++count;
    }

    void insertBack(const T& value)
    {
        Node* node = new Node(value);
        if (tail == nullptr)
            head = tail = node;
        else
        {
            tail->next = node;
            tail = node;
        }
        ++count;
    }

    bool removeFront(T& removedValue)
    {
        if (isEmpty()) return false;

        Node* old = head;
        removedValue = old->data;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete old;
        --count;
        return true;
    }

    // Removes the first node whose stored value equals target.
    // For pointer types, this compares pointer addresses.
    bool removeValue(const T& target)
    {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr)
        {
            if (current->data == target)
            {
                if (previous == nullptr) head = current->next;
                else previous->next = current->next;

                if (current == tail) tail = previous;
                delete current;
                --count;
                return true;
            }
            previous = current;
            current = current->next;
        }
        return false;
    }

    T* findValue(const T& target)
    {
        Node* current = head;
        while (current != nullptr)
        {
            if (current->data == target) return &current->data;
            current = current->next;
        }
        return nullptr;
    }

    T* front()
    {
        return head == nullptr ? nullptr : &head->data;
    }

    void clear()
    {
        while (head != nullptr)
        {
            Node* old = head;
            head = head->next;
            delete old;
        }
        tail = nullptr;
        count = 0;
    }
};

#endif
