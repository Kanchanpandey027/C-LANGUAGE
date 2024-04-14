#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    char d,e,f,g,h;
    int yearofbirth;

    printf("enter your firstname:\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("enter your lastname:\n");
    scanf("%c%c%c%c%c",&d,&e,&f,&g,&h);
    printf("enter yearofbirth:\n");
    scanf("%d",&yearofbirth);
    printf("%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h);

    printf("%d",yearofbirth);


    return 0;
}
