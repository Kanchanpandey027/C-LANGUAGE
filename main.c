#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter 3 number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        printf("1st number is greater among three");
    if(b>c)
        printf("2nd number is greater among three");
    if(c>a)
        printf("3rd number is greater among three");
    return 0;
}
