#include <stdio.h>
#include <stdlib.h>

void ascending(int **table, int rowSize, int columnSize) {
    int temp;
    int total = rowSize * columnSize;

    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {

            int r1 = i / columnSize;
            int c1 = i % columnSize;

            int r2 = j / columnSize;
            int c2 = j % columnSize;

            if (*(table[r1] + c1) > *(table[r2] + c2)) {
                temp = *(table[r1] + c1);
                *(table[r1] + c1) = *(table[r2] + c2);
                *(table[r2] + c2) = temp;
            }
        }
    }
}

void descending(int **table, int rowSize, int columnSize) {
    int temp;
    int total = rowSize * columnSize;

    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {

            int r1 = i / columnSize;
            int c1 = i % columnSize;

            int r2 = j / columnSize;
            int c2 = j % columnSize;

            if (*(table[r1] + c1) < *(table[r2] + c2)) {
                temp = *(table[r1] + c1);
                *(table[r1] + c1) = *(table[r2] + c2);
                *(table[r2] + c2) = temp;
            }
        }
    }
}

void display(int **table, int rowSize, int columnSize) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < columnSize; j++) {
            printf("%d ", *(table[i] + j));
        }
        printf("\n");
    }
}

int main() {
    int rowSize, columnSize;
    int **table;

    printf("How many rows: ");
    scanf("%d", &rowSize);

    printf("How many columns: ");
    scanf("%d", &columnSize);

    table = (int **) malloc(rowSize * sizeof(int *));

    for (int i = 0; i < rowSize; i++) {
        table[i] = (int *) malloc(columnSize * sizeof(int));
    }

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < columnSize; j++) {
            printf("Enter: ");
            scanf("%d", table[i] + j);
        }
    }

    // ASCENDING (whole matrix)
    ascending(table, rowSize, columnSize);
    printf("\nAscending (whole matrix):\n");
    display(table, rowSize, columnSize);

    // DESCENDING (whole matrix)
    descending(table, rowSize, columnSize);
    printf("\nDescending (whole matrix):\n");
    display(table, rowSize, columnSize);

    return 0;
}