#include <stdio.h>

int main(void) {
  int number1, number2;

  printf("Give me the fist number: ");
  scanf("%d", &number1);

  printf("Give me the second number: ");
  scanf("%d", &number2);

  if (number1 > number2) {
    printf("%d is greater than %d\n", number1, number2);
  } else {
    printf("%d is greater than %d\n", number2, number1);
  }
}
