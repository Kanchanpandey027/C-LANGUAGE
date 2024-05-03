#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum=0;
    printf("the odd number are :");
    scanf("%d",& a);
    for(a=1;a<=20;a= a + 2)
    {
        sum=sum+a;
      printf("%d ",a);
    }
    {
        printf("\nthe sum of odd  natural number upto 10 terms :%d",sum);
    }
    return 0;
}
