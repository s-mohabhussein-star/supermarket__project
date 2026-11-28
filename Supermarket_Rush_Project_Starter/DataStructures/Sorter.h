#pragma once

template <typename T>
class Sorter {
private:
    // Swaps two elements
    static void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    // Partitions the array around a pivot using a custom comparator
    template <typename Compare>
    static int partition(T* arr, int low, int high, Compare comp) {
        T pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (comp(arr[j], pivot)) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    // Recursive Quick Sort helper
    template <typename Compare>
    static void quickSortHelper(T* arr, int low, int high, Compare comp) {
        if (low < high) {
            int pi = partition(arr, low, high, comp);
            quickSortHelper(arr, low, pi - 1, comp);
            quickSortHelper(arr, pi + 1, high, comp);
        }
    }

public:
    // Sorts an array in-place using Quick Sort with a custom comparator
    template <typename Compare>
    static void quickSort(T* arr, int size, Compare comp) {
        if (arr == nullptr || size <= 1) return;
        quickSortHelper(arr, 0, size - 1, comp);
    }
};
