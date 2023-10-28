#include <stdio.h>

int main(void) {
  int number;

  printf("Give me a number: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("the number is even\n");
  } else {
    printf("the number is odd\n");
  }
}
