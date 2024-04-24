#include <stdio.h>
#include <stdlib.h>

int main()
{


int maths;
int phy;
int chem;
int tos=maths+phy+chem;
int a=maths+tos;

    printf("enter marks obtained in physics:");
    scanf("%d",&phy);
    printf("enter marks obtained in maths:");
    scanf("%d",&maths);
    printf("enter marks obtained in chem:");
    scanf("%d",&chem);
    printf("total in all three sub%d\n",tos=maths+phy+chem);
    printf("total in a",a=maths+tos);
    if(phy>=55)
    {
        printf("The candidate is eligible for admission");
    }
    if (chem>50)
        {
         //printf("The candidate is eligible for admission");
        }
    if (maths>=65)
    {
         //printf("The candidate is eligible for admission");
    }
    else if(tos>=180)
    {
        printf("The candidate is eligible for admission");
    }
    else if(a>=40)
    {
        printf("The candidate is eligible for admission");
    }
    else {
        printf("The candidate is not eligible for admission");
    }
}

