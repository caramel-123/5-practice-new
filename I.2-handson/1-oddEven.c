#include <stdio.h>
#include <stdlib.h>
int main() {
  int listQty, *list;

  printf("How many elements? ");
  scanf("%d", &listQty);

  list = (int *) malloc(listQty * sizeof(int));

  for (int i=0; i<listQty; i++) {
    printf("Enter: ");
    scanf("%d", (list + i));
  }

  printf("Even: ");
  for (int i=0; i<listQty; i++) {
    if (*(list+i)%2==0) {
      printf("%d ", *(list + i));
    }
  }

  printf("\n");
  printf("Odd: ");
  for (int i=0; i<listQty; i++) {
    if (*(list+i)%2!=0) {
      printf("%d ", *(list + i));
    }
  }

  return 0;
}