#include <stdio.h>
#include <stdlib.h>

int main()
{
int b[3]={2,5,8};
int i,num;
int sum=0;
for(i=0;i<3;i++)

{
    printf("element  b[%d]=%d\n",i,b[i]);
    sum+=b[i];
}

    printf("sum of array is:%d",sum);


    return 0;
}

