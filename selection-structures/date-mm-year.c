#include <stdio.h>

int main(void) {
  int day, month, year;

  printf("Give me the day: ");
  scanf("%d", &day);

  printf("Give me the month: ");
  scanf("%d", &month);

  printf("Give me the year: ");
  scanf("%d", &year);

  if (year <= 0) {
    printf("Invalid year\n");
  } else if (month < 1 || month > 12) {
    printf("Invalid month\n");
  } else if (day < 1 || day > 31) {
    printf("Invalid day\n");
  } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
    printf("Invalid day\n");
  } else if (month == 2) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      if (day > 29) {
        printf("Invalid day\n");
      }
    } else if (day > 28) {
      printf("Invalid day\n");
    }
  } else {
    printf("The date is %d/%d/%d\n", day, month, year);
  }

  return 0;
}

