#include <stdio.h>

int main(void) {
  int number_month;
  printf("What is the number of the month that u want: ");
  scanf("%d", &number_month);

  switch (number_month) {

  case 1:
    printf("The month is January\n");
    break;

  case 2:
    printf("The month is February\n");
    break;

  case 3:
    printf("The month is March\n");
    break;

  case 4:
    printf("The month is April\n");
    break;

  case 5:
    printf("The month is May\n");
    break;

  case 6:
    printf("The month is June\n");
    break;

  case 7:
    printf("The month is July\n");
    break;

  case 8:
    printf("The month is August\n");
    break;

  case 9:
    printf("The month is September\n");
    break;

  case 10:
    printf("The month is October\n");
    break;

  case 11:
    printf("The month is November\n");
    break;

  case 12:
    printf("The month is December\n");
    break;

    return 0;
  }
}
