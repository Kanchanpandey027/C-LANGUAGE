#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    printf("enter any 2 num:");
    scanf("%d %d",&a,&b);
    printf("A=%d B=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("A= %d B=%d",a,b);
    return 0;
}
