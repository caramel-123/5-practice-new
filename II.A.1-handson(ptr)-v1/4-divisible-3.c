#include <stdio.h>
#include <stdlib.h>

int main() {
    int rowSize, columnSize;
    int **arr;

    printf("Enter number of rows: ");
    scanf("%d", &rowSize);
    printf("Enter number of columns: ");
    scanf("%d", &columnSize);

    // Allocate memory for rows
    arr = (int **) malloc(rowSize * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for columns in each row
    for (int i = 0; i < rowSize; i++) {
        arr[i] = (int *) malloc(columnSize * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    // Input elements using pointer-style
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < columnSize; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", (*(arr + i) + j));
        }
    }

    printf("\nElements divisible by 3:\n");
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < columnSize; j++) {
            if (*(*(arr + i) + j) % 3 == 0) {
                printf("Value: %d, Row: %d, Col: %d\n", *(*(arr + i) + j), i, j);
            }
        }
    }

    // Free memory
    for (int i = 0; i < rowSize; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}