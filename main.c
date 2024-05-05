#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
      printf(" element in array are %d:",i);
      scanf("%d",&a[i]);
               }
               printf("\n element in array are:");
               for(i=0;i<10;i++)
               {
                   printf("%d ",a[i]);
               }
               printf("\n");


    return 0;
}
