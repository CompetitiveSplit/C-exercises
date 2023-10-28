#include <stdio.h>

int main(void) {
  int number1, number2, number3, number4;

  printf("Give me the fist number: ");
  scanf("%d", &number1);

  printf("Give me the second number: ");
  scanf("%d", &number2);

  printf("Give me the third number: ");
  scanf("%d", &number3);

  printf("Give me the fourth number: ");
  scanf("%d", &number4);

  if (number1 > number2 && number1 > number3 && number1 > number4) {
    printf("%d is greater than %d, %d and %d\n", number1, number2, number3,
           number4);
  } else if (number2 > number1 && number2 > number3 && number2 > number4) {
    printf("%d is greater than %d, %d and %d\n", number2, number1, number3,
           number4);
  } else if (number3 > number1 && number3 > number2 && number3 > number4) {
    printf("%d is greater than %d, %d and  %d\n", number3, number1, number2,
           number4);
  } else {
    printf("%d is greater than %d, %d and  %d\n", number4, number1, number2,
           number3);
  }
}
