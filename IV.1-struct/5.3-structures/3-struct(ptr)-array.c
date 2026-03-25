#include <stdio.h>
#include <stdlib.h>

struct Students {
  int id;
  char name[80];
  int score;
};
int main() {
  int studentQty;
  

  printf("How many students: ");
  scanf("%d", &studentQty);

  struct Students *student;
  student = (struct Students *) malloc(studentQty * sizeof(struct Students));

  for (int i=0; i<studentQty; i++) {
    printf("Enter id: ");
    scanf("%d", &(student + i)->id);
    printf("Enter name: ");
    scanf("%s", &(student + i)->name);
    printf("Enter score: ");
    scanf("%d", &(student + i)->score);
  }

  for (int i=0; i<studentQty; i++) {
    printf("Id: %d\n", (student + i)->id);

    printf("Name: %s\n", (student + i)->name);

    printf("Score: %d\n\n", (student + i)->score);

  }



}