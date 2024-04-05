#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j,num;
    printf("enter any even number of first array");

      for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
    {
        while(1)
        {
          int num;
              printf("enter a[%d][%d]= ",i,j);
             scanf("%d",&num);
             if(num%2==0)
             {
                 a[i][j]=num;
                 i++;
                 j++;

             }
             if(i==3)


                break;
             }
    }
    }
    printf("enter any odd number for second array:\n");

        for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
    {
        while(1){
           int num;
            printf("enter b[%d][%d]= ",i,j);
             scanf("%d",&num);
             if(num%2!=0)
             {
                 b[i][j]=num;
                 i++;
                 j++;

             }
             if(i==3)
                   break;
             }
    }
    }

   printf("first array is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


    printf("second array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

             printf("\n\n result\n\n");
             for(i=0;i<3;i++)
             {
                 for(j=0;j<3;j++)
             {
                 c[i][j]=a[i][j]+b[i][j];
                 printf("%d",c[i][j]);
             }
             printf("\n");
             }
return 0 ;
    }











































































