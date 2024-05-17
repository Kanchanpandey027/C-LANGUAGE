#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int l=0;
    printf("input the string : ");
    scanf("%s",str);
    printf("the characters of the string are :\n");
    while(str[l]!='\0')
        {
    printf("%c  ",str[l]);
    l++;
        }
        printf("\n");
    return 0;
}
