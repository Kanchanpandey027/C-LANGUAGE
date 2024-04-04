#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int even[5];
    int i;
    int temp=0;
    while(1) //1 is true
    {
    printf("Enter any even number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
     even[i]=num;
     i++;
    }
    if(i==5)
        break;
    }
   for(i=0;i<5;i++)
    temp=temp+even[i];
    {
        printf("sum of all even num:%d",temp);
    }
    return 0;
}
