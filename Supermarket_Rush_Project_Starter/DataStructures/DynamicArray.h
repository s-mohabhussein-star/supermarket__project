#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

// A simple resizable array template.
// This class owns the array storage, not objects pointed to by pointer values.
template <typename T>
class DynamicArray
{
private:
    T* data;
    int count;
    int capacity;

    void grow()
    {
        int newCapacity = (capacity == 0) ? 2 : capacity * 2;
        T* bigger = new T[newCapacity];

        for (int i = 0; i < count; ++i)
            bigger[i] = data[i];

        delete[] data;
        data = bigger;
        capacity = newCapacity;
    }

public:
    DynamicArray() : data(nullptr), count(0), capacity(0) {}
    ~DynamicArray() { delete[] data; }

    DynamicArray(const DynamicArray&) = delete;
    DynamicArray& operator=(const DynamicArray&) = delete;

    int size() const { return count; }
    int getCapacity() const { return capacity; }
    bool isEmpty() const { return count == 0; }

    void add(const T& value)
    {
        if (count == capacity) grow();
        data[count++] = value;
    }

    T* get(int index)
    {
        if (index < 0 || index >= count) return nullptr;
        return &data[index];
    }

    const T* get(int index) const
    {
        if (index < 0 || index >= count) return nullptr;
        return &data[index];
    }

    T& operator[](int index) { return data[index]; }
    const T& operator[](int index) const { return data[index]; }
};

#endif
