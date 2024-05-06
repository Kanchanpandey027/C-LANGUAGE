#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={2,5,7};
    int i;
    printf("input the number of element to store in the array :3\n");
    printf("input 3 number of element in the array:\n");
    for(i=0;i<3;i++)

    {
          printf("element a[%d]=%d\n",i,a[i]);

               }
               printf("the value stored in array is:");
               for(i=0;i<3;i++)
               {
                   printf(" %d ",a[i]);
               }
               printf(" \n");
               printf( "element in reverse order : ");
               for(i=2;i>=0;i--)
                {
                    printf("%d ",a[i]);
                }



    return 0;
}









