#include <stdio.h>

int main(void) {
  int number;

  printf("Give me a number: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("the number is negative\n");
  } else {
    printf("the number is positive\n");
  }
  return 0;
}
