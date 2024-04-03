#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("%d\n\n",sizeof(x));

    int a[]={1,2,3,4,5,67,8};
    int a_size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",a[a_size-2]);
    return 0;
}
