#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("enter temp:");
    scanf("%d",&temp);
    float f=temp *1.8000 + 32.00;
    printf("%f degree in fahrenheit",f);
    return 0;
}
