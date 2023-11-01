#include <stdio.h>

int main(void) {
  int water_temperature;

  printf("Gime the temperature of the water: ");
  scanf("%d", &water_temperature);

  if (water_temperature <= 0) {
    printf("The state of the water is solid\n");
  } else if (water_temperature > 1 && water_temperature <= 100) {
    printf("The state of the water is liquid\n");
  } else {
    printf("The state of the water is gas \n");
  }
  return 0;
}
