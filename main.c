#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2],i,j;

    printf("matrix 1 is :\n");
    for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
    {
    scanf("%d ",&a[i][j]);
    }
    }

    printf("matrix 2 is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    printf("the 1st matrix is:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
    }
    printf("the 2nd matrix is:");
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
        {
         c[i][j]=a[i][j]+b[i][j];
        }
    printf("\n");
   }
   printf("sum of matrix :\n");
       for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
return 0;

    }
