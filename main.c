#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec;
    int hr;
    int min;
    min=min/60;
    sec=sec%60;
    hr=sec/3600;

    printf("enter your sec:");
    scanf("%d",&sec);
    printf("min %d\n",min=sec/60);
    printf("sec %d\n",sec=sec%60);
    printf("hr %d",hr=sec%60);

    return 0;
}
