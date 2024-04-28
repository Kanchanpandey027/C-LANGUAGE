#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum=0;
    float avg=0;
    printf("the first 10 number\n");
    for(a=1;a<11;a++)
    {
        sum=sum+a;
        avg=sum/2;
        printf("%d\n",&a);
    }
    {
        printf("sum%d\n",sum);
    }
    {
        printf("avg%f\n",avg);
    }
    return 0;
}
