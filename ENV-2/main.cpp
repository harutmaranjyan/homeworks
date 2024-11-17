#include <iostream>
#include "complex.hpp"
#include "sorting.hpp"

int main() {
    const int SIZE = 5;
    ComplexNumber numbers[SIZE] = {
        ComplexNumber(1, 2),
        ComplexNumber(2, 1),
        ComplexNumber(0, 3),
        ComplexNumber(4, 6),
        ComplexNumber(3, 2)
    };

    std::cout << "Original array" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        numbers[i].print();
    }

    bubbleSort(numbers, SIZE);

    std::cout << "\nSorted array" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        numbers[i].print();
    }

    return 0;
}
