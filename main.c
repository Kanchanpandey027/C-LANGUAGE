#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum=0;
    printf("the first 7 natural no:\n");

    for (a=1;a<8;a++)
    {
        sum=sum+a;
        printf("%d\n",a);
    }
{
    printf("the sum of natural number upto 7 terms:%d",sum);
}
    return 0;
}
