#include "sorting.hpp"

void bubbleSort(ComplexNumber numbers[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j].abs() > numbers[j + 1].abs()) {
                ComplexNumber temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
