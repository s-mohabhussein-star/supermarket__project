#pragma once

template <typename T>
class DynamicArray {
private:
    T* data;
    int capacity;
    int size;

    // Doubles the array capacity when full
    void resize() {
        capacity *= 2;
        T* newData = new T[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    // Constructor
    DynamicArray(int initialCapacity = 10) {
        capacity = initialCapacity;
        size = 0;
        data = new T[capacity];
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
    }

    // Adds an element to the end of the array
    void pushBack(T val) {
        if (size == capacity) {
            resize();
        }
        data[size++] = val;
    }

    // Removes an element at a specific index; returns false if out of bounds
    bool removeAt(int index) {
        if (index < 0 || index >= size) return false;
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
        return true;
    }

    // Safely retrieves an element at a specific index; returns false if out of bounds
    bool get(int index, T& outVal) const {
        if (index < 0 || index >= size) return false;
        outVal = data[index];
        return true;
    }

    // Direct array access operator
    T& operator[](int index) {
        return data[index];
    }

    // Returns the current number of elements
    int getSize() const {
        return size;
    }

    // Checks if the array is empty
    bool isEmpty() const {
        return size == 0;
    }
};
