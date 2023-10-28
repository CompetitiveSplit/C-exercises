#include <stdio.h>

int main(void) {

  int number1, number2;

  printf("Give me a number: ");
  scanf("%d", &number1);

  if (number1 < 0) {
    printf("the number is negative\n");
  } else {
    printf("Give me a second number: ");
    scanf("%d", &number2);
    printf("Operations: \n");

    int addition = number1 + number2;
    int sustraction = number1 - number2;
    int product = number1 % number2;

    printf("addition: %d\n", addition);
    printf("sustraction: %d\n", sustraction);
    printf("product %d\n", product);
  }
}
