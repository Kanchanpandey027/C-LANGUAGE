#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={1,5,1};
    int i,j,num;
    printf("input the number of element:3\n");
    for(i=0;i<3;i++)
    {
         printf("element a[%d]=%d\n",i,a[i]);
    }
    printf("the unique element found in the array are:");
    for(i=0;i<3;i++)
        {
            int isunique=1;
            for(j=0;j<3;j++)
                {
                    if(i!=j && a[i]==a[j])
                        {
                            isunique=0;
                            break;
                         }
                }

            if(isunique)
                {
                    printf("%d",a[i]);
                }

            }

    return 0;
}
