#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,mul;
    printf("input the number:\n");
    scanf("%d",&mul);
    for(a=1;a<=10;a++)
    {
        printf("15*%d=%d\n",a,mul*a);
    }
    return 0;
}
