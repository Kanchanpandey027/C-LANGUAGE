#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter  a number:");
    scanf("%d",&num);
    if((num%2)==0)
        printf("%d is an even integer",num);
    else
        printf("%d is an odd integer",num);
    return 0;
}
