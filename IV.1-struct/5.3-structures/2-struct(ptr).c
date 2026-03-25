#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  int id;
  char name[80];
  int score;
};
int main() {

  struct Student *sptr;

  sptr = (struct Student*) malloc(sizeof(struct Student));

  sptr->id = 109342;
  strcpy(sptr->name, "Melfred");
  sptr->score = 10;

  printf("Id: %d\n", sptr->id);
  printf("Name: %s\n", sptr->name);
  printf("Score: %d\n", sptr->score);



  return 0;
}