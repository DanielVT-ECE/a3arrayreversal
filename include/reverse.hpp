#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <iostream>
#include <cstring>

template <typename T>
void print_array(const T arr[], int n);

template <typename T>
void reverse_array(T arr[], int n);

#include "reverse.ipp"
#endif