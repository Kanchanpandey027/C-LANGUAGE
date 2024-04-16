#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter any 2 num:\n");
    scanf("%d %d",&num1,&num2 );
    if(num1==num2)
    printf("num1 and num2 are equal");
    else
    printf("num 1 and num2 are not equal");
    return 0;
}
