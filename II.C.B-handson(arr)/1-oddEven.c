#include <stdio.h>
#include <stdlib.h>

int main() {
    int listQty, *list;

    printf("How many elements? ");
    scanf("%d", &listQty);

    list = (int *) malloc(listQty * sizeof(int));

    // input
    for (int i = 0; i < listQty; i++) {
        printf("Enter: ");
        scanf("%d", &list[i]);   // ✅ array style
    }

    // even numbers
    printf("Even: ");
    for (int i = 0; i < listQty; i++) {
        if (list[i] % 2 == 0) {  // ✅ array style
            printf("%d ", list[i]);
        }
    }

    printf("\n");

    // odd numbers
    printf("Odd: ");
    for (int i = 0; i < listQty; i++) {
        if (list[i] % 2 != 0) {  // ✅ array style
            printf("%d ", list[i]);
        }
    }

    free(list); // good practice
    return 0;
}