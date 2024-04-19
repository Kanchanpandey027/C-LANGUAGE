#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("enter your year:");
    scanf("%d",&year);
    if(year==2016)
        printf("2016 is leapyear");
    else
        printf("2016 is not leapyear");

    return 0;
}
