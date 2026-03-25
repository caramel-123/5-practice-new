#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
  int id;
  char name[80];
  int score;
};

void update(struct Student *s1) {
  s1->id = 100000;
  strcpy(s1->name, "Mel");
  s1->score = 100;
}

int main() {
  struct Student s1 = {109342, "Melfred", 10};

  update(&s1);
  printf("Id: %d\n", s1.id);
  printf("Name: %s\n", s1.name);
  printf("Score: %d\n", s1.score);




  return 0;
}