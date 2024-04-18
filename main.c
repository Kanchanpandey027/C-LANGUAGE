#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num>0)
        printf("number is positive number");
    else
        printf("number is negative number");

    return 0;
}
