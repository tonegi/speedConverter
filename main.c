#include <stdio.h>

int main(void) {
  int option;
  double speed, convertedSpeed;
  printf("==================================\n");
  printf("| [1] - Convert km/h to m/s      |\n");
  printf("| [2] - Convert m/s to km/h      |\n");
  printf("| [3] - Exit                     |\n");
  printf("==================================\n");
  printf("Enter an option: ");
    scanf("%d", &option);

  if (option==1) {
    printf("Enter the speed in km/h: ");
      scanf("%lg", &speed);
    convertedSpeed = speed/3.6;
    printf("\n%gkm/h is equivalent to %gm/s\n", speed, convertedSpeed);
  } 
  else if (option==2) {
    printf("Enter the speed in m/s: ");
      scanf("%lg", &speed);
    convertedSpeed = speed*3.6;
    printf("\n%gm/s is equivalent to %gkm/s",speed, convertedSpeed);
  } 
  else if (option==3) {
    printf("See you soon...");
}    
  else {
    printf("UNRECOGNIZED OPTION");
  }
  return 0;
}
