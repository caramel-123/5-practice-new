#include <stdio.h>
#include <stdlib.h>
int main() {
  int rowSize, columnSize, **list;

  printf("How many rows: ");
  scanf("%d", &rowSize);
  printf("How many column: ");
  scanf("%d", &columnSize);

  list = (int *) malloc(rowSize * sizeof(int *));
  for (int i=0; i<rowSize; i++) {
    list[i] = (int *) malloc(rowSize * sizeof(int));
  }

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("Enter: ");
      scanf("%d", (list[i] + j));
    }
  }

  printf("Even: ");
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (*(list[i] + j)%2==0) {
        printf("%d ", *(list[i] + j));
      }
    }
  }

  printf("\n");
  printf("Odd: ");
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (*(list[i] + j)%2!=0) {
        printf("%d ", *(list[i] + j));
      }
    }
  }

  return 0;
}