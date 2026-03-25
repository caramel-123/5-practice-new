#include <stdio.h>

struct Student {
  int id;
  char name[80];
  int score;
};

void display(struct Student s[], int n) {
  for (int i=0; i<n; i++) {
    printf("Id: %d\n", (s + i)->id);
    printf("Name: %s\n", (s + i)->name);
    printf("Score: %d\n\n", (s + i)->score);
  }
}
int main() {

  struct Student s[2] = {
    {10, "Mel", 10},
    {11, "Fred", 10}
  };

  display(s, 2);

}