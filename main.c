#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,cube;
    printf("input number of terms:");
    scanf("%d",&cube);
    for(a=1;a<=cube;a++)
    {
        printf("number is :%d and cube of the %d is:%d\n",a,a,(a*a*a));
    }
    return 0;
}
