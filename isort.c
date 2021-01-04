#include <stdio.h>
#include "isort.h"

void shift_element(int* arr, int i) {
    for (int* j = arr + i; j > arr; j--) {
        *(j) = *(j - 1);
    }
}


void insertion_sort(int* arr, int len) {
    for (int* i = arr + 1; i < arr + len; i++) {
        for (int* j = i - 1; j >= arr; j--) {
            if (*(j + 1) < *j) {
                int temp = *(j + 1);
                shift_element(j, 1);
                *j = temp;
            }
        }
    }
}
