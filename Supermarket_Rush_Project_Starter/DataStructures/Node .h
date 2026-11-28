#pragma once

// Standard node for Singly Linked List, Stack, and Queue
template <typename T>
struct Node {
    T data;
    Node<T>* next;

    Node(T val) : data(val), next(nullptr) {}
};

// Doubly linked node for Doubly Linked List
template <typename T>
struct DNode {
    T data;
    DNode<T>* next;
    DNode<T>* prev;

    DNode(T val) : data(val), next(nullptr), prev(nullptr) {}
};

// Priority node for Priority Queue
template <typename T>
struct PQNode {
    T data;
    int priority;
    PQNode<T>* next;

    PQNode(T val, int prio) : data(val), priority(prio), next(nullptr) {}
};

