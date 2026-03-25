#include <stdio.h>
#include <stdlib.h>

int main() {
  int listSize, *list;

  printf("How many numbers: ");
  scanf("%d", &listSize);

  list = (int *) malloc(listSize * sizeof(int));

  if (list == NULL) {
    printf("Memory Allocation Unsuccessful!");
  }

  for (int i=0; i<listSize; i++) {
    printf("Enter: ");
    scanf("%d", (list + i));
  }

  int max = list[0];
  int min = list[0];
  for (int i=0; i<listSize; i++) {
    if (*(list + i) > max) {
      max = *(list + i);
    }
    if (*(list + i) < min) {
      min = *(list +i);
    }
  }
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);


  free(list);
  return 0;
}