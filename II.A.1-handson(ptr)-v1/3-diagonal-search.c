#include <stdio.h>
#include <stdlib.h>

int main() {

  int rowSize, columnSize;
  int **table;

  printf("Enter rows: ");
  scanf("%d", &rowSize);
  printf("Enter columns: ");
  scanf("%d", &columnSize);

  table = (int **) malloc(rowSize * sizeof(int *));
  if (table == NULL) {
    printf("Memory Allocation Failed!\n");
    return 1;
  }

  for (int i = 0; i < rowSize; i++) {
    table[i] = (int *) malloc(columnSize * sizeof(int));
  }

  // Input
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < columnSize; j++) {
      printf("Enter num: ");
      scanf("%d", &table[i][j]);
    }
  }

  int again;
  do {
    int guessNum;
    printf("Guess the num: ");
    scanf("%d", &guessNum);

    int found = 0;

    // ONLY diagonal loop
    for (int i = 0; i < rowSize && i < columnSize; i++) {
      if (guessNum == table[i][i] || guessNum == table[i][2-i]) {
        printf("Value: %d, Row: %d, Col: %d\n", table[i][i], i, i);
        found = 1;
        break; // optional (stop after first match)
      }
    }

    if (!found) {
      printf("Element not found on the diagonal.\n");
    }

    printf("Try again (1/0): ");
    scanf("%d", &again);

  } while (again == 1);

  return 0;
}