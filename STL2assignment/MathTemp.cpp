// Elijah Evans
// CIS 1202 201
// April 26, 2024
#include "MathTemp.h"

template <typename T>
T half(T value) {
    return value / 2.0;
}

// Template for handling and rounding int variables
template <>
int half<int>(int value) {
    return (round(value / 2.0));
}

template float half(float);
template double half(double);
template int half(int);
