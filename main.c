#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollno;
    char n,a,m,e,s;
    float phy;
    float chem;
    float comp_app;
    float total=phy+chem+comp_app;
    float per;
    printf("Enter the roll number of student:");
    scanf("%d",&rollno);
   // printf("Enter the name of the student:");
    //scanf("%c %c%c%c%c",&n,&a,&m,&e,&s);
    printf("Enter the marks of phy:\n");
    scanf("%f",&phy);
    printf("Enter the marks of chem:\n");
    scanf("%f",&chem);
    printf("Enter the marks of comp_app:\n");
    scanf("%f",&comp_app);
    printf("total marks of student:%f\n",total=phy+chem+comp_app);
    per=total/300*100;
    printf("percentage:%f\n",per=total/300*100);
    if(per>70)
    {
        printf("Division =First");
    }
    else if(per>60)
{
    printf("Division =Second");
}
  else if(per>49)
  {
      printf("Division=Third");
  }
  else
    {
    printf("Fail");
  }
}

