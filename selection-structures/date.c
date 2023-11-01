#include <stdio.h>

int main(void) {
  int date;

  printf("Give me your day\n");
  scanf("%d", &date);

  if (date < 32) {
    date++;
    printf("The next day is: %d\n", date);
  } else {
    printf("Enter a valid day\n");
  }
  return 0;
}
