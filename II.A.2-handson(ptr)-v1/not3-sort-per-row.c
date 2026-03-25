#include <stdio.h>
#include <stdlib.h>
void ascending(int **table, int rowSize, int columnSize) {
  int temp;
  for (int k=0; k<rowSize; k++) {
    for (int i=0; i<(columnSize - 1); i++) {
      for (int j=(i+1); j<columnSize; j++) {
        if (*(table[k] + i) > *(table[k] + j)) {
          temp = *(table[k] + i);
          *(table[k] + i) = *(table[k] + j);
          *(table[k] + j) = temp;
        }
      } 
    }
  }
}

void display(int **table, int rowSize, int columnSize) {
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
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

  for (int i=0; i<rowSize; i++) {
    table[i] = (int *) malloc(columnSize * sizeof(int));
  }

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("Enter: ");
      scanf("%d", table[i] + j);
    }
  }

  ascending(table, rowSize, columnSize);
  display(table, rowSize, columnSize);

  return 0;
}


/* if arrange by row
void ascending(int **table, int rowSize, int columnSize) {
  int temp;
  for (int k=0; k<rowSize; k++) {
    for (int i=0; i<(columnSize - 1); i++) {
      for (int j=(i+1); j<columnSize; j++) {
        if (*(table[k] + i) > *(table[k] + j)) {
          temp = *(table[k] + i);
          *(table[k] + i) = *(table[k] + j);
          *(table[k] + j) = temp;
        }
      } 
    }
  }
}
*/