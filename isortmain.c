#include <stdio.h>
#include "isort.h"
#define SIZE 50
int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("Enter a number:\n");
        scanf("%d", (arr + i));
    }

   insertion_sort(arr, SIZE);

    for (int j = 0; j < SIZE; j++) {
        printf("%d", arr[j]);
        if (j < SIZE - 1) {
            printf(",");
        }
    }
    return 0;
}