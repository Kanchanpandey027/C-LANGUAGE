#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r;
  float volume;
  printf("Enter Radius of sphere:");
  scanf("%d",&r);
  volume=4/3*3.14*r*r*r;
  printf("Volume of sphere=%.2f",volume);

    return 0;
}
