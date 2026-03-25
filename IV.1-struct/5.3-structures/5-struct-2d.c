#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int score;
};

int main() {
    int rows = 2, cols = 2;

    struct Student *s;

    // allocate 2D (flattened)
    s = (struct Student *) malloc(rows * cols * sizeof(struct Student));

    // input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("\nStudent [%d][%d]\n", i, j);

            scanf("%s", (s + i*cols + j)->name);
            scanf("%d", &(s + i*cols + j)->score);
        }
    }

    printf("\n--- Output ---\n");

    // output
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("[%d][%d] %s - %d\n",
                   i, j,
                   (s + i*cols + j)->name,
                   (s + i*cols + j)->score);
        }
    }

    free(s);
    return 0;
}