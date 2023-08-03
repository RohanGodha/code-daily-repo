#include <iostream>

// Function to calculate the median of elements in the input list
float median(int size, int* inputList) {
    int start_index = 0;
    int end_index = size - 1;
    float res = -1;

    if (size % 2 != 0) { // Odd length arrays
        int median_order = (size + 1) / 2;
        res = static_cast<float>(quick_select(inputList, start_index, end_index, median_order));
    } else { // Even length arrays
        int median_order1 = size / 2;
        int median_order2 = median_order1 + 1;

        int median1 = quick_select(inputList, start_index, end_index, median_order1);
        int median2 = quick_select(inputList, start_index, end_index, median_order2);

        res = (median1 + median2) / 2.0;
    }

    return res;
}
