#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,temp=0;
    int odd[5];
    while(1)
    {
    printf("Enter your odd number:\n");
    scanf("%d",&num);
    if(num%2==1)
    {
    odd[i]=num;
    i++;
    }
    if(i==5)
        break;
}
        for(i=0;i<5;i++)
            temp=temp+odd[5];
        {
         printf("sum of all num :%d ",temp);
        }
    return 0;
}
