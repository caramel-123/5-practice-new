#include <stdio.h>
#include <stdlib.h>

void ascending(int *list, int listSize) {
  int temp;
  for (int i=0; i<(listSize-1); i++) {
    for (int j=i+1; j<listSize; j++) {
      if (*(list+i) > *(list+j)) {
        temp = *(list+i);
        *(list+i) = *(list+j);
        *(list+j) = temp;
      }
    }
  }
}

void descending(int *list, int listSize) {
  int temp;
  for (int i=0; i<(listSize-1); i++) {
    for (int j=i+1; j<listSize; j++) {
      if (*(list+i) < *(list+j)) {
        temp = *(list+j);
        *(list+j) = *(list+i);
        *(list+i) = temp;
      }
    }
  }
}
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

  ascending(list, listSize);
  for (int i=0; i<listSize; i++) {
    printf("%d ", *(list + i));
  }

  printf("\n\n");
  descending(list, listSize);
  for (int i=0; i<listSize; i++) {
    printf("%d ", *(list + i));
  }
  return 0;
}