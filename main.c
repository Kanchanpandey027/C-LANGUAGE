#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int i;
    printf("Enter the array element a[%d]:");
    for(i=0;i<3;i++)
        {
    scanf("%d",&a[i]);
        }
    if (a[0]==a[1] && a[1]==a[2])
       {
        printf("0,1 and 2 are same ");
       }
   else if(a[0]==a[1])
       {
       if(a[1]>a[2])
       {
           printf("0 and 1 are same and maximum");
       }
       else
        {
        printf("2 is maximum then 0 and 1\n");
        printf("0 and 1 are same");
         }
       }
       else if(a[1]==a[2])
       {
           if(a[2]>a[0])
          {
          printf("0 and 2 are same and maximum");
           }
           else
           {
            printf("0 is maximum then 1 and 2\n");
            printf("1 and 2 are same");
           }
       }
           else if(a[0]==a[2])
           {
               if (a[0]>a[1])
               {
                   printf("0 and 2 are same and maximum");
               }
            else {
                printf("1 is maximum than 0 and 2\n");
                printf("0 and 2 are same ");
            }
          }
          else{
             if(a[0]==a[1])
            {
               if(a[0]>a[2])
                {
                  printf("0 is maximum than 1 and 2");
               }
              else{
                 printf("2 is maximum than 0 and 1\n");

              }
            }
            else
                {
                 if(a[1]>a[2])
                 {
                   printf("1 is maximum than 0 and 2");
                 }
            }
            else
            {
                printf("2 is greater than 0 and 1");
            }
           }
}
}

    return 0;
}
