#pragma once
#include <iostream>

template <typename T>
void print_array(const T arr[], int n) {
    std::cout << "[";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i];
        if (i < n - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

template <typename T>
void reverse_array(T arr[], int n) {
    if constexpr (std::is_same<T, char>::value) {
        if (n > 0 && arr[n-1] == '\0') --n;
    }
    for (int i = 0; i < n / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}