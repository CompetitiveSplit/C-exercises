#include <stdio.h>

int main(void) {
  int number1, number2, number3;

  printf("Give me the fist number: ");
  scanf("%d", &number1);

  printf("Give me the second number: ");
  scanf("%d", &number2);

  printf("Give me the third number: ");
  scanf("%d", &number3);
  
  if (number1 > number2 && number1 > number3) {
    printf("%d is greater than %d and %d\n", number1, number2, number3);
  } else if (number2 > number1 && number2 > number3) {
    printf("%d is greater than %d and %d\n", number2, number1, number3);
  }else{
    printf("%d is greater than %d and %d\n", number3, number1, number2);

  }
  return 0;
}
