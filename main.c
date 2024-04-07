#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,temp=0;
   int a[4];
   for(i=0;i<4;i++)
   {
       printf("Enter your number :%d\n",i+1);
       scanf("%d",&a[i]);
   }
   for(i=0;i<4;i++)
   {
       temp=temp+a[i];
   }
   printf("sum of all element : %d\n",temp);
    return 0;
}
