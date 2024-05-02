#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,m;
    printf("Input upto the table number  starting from 1 : ");
    scanf("%d",&m);
    printf("multiplication table from 1 to %d \n",m);
    for(b=1;b<=10;b++)
    {
    for(a=1;a<=m;a++)
        {
    printf("%d*%d=%d\t",a,b,a*b);
    }
    printf("  \n");
}
    return 0;
}
