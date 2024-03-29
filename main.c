#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,n100=0,n50=0,n20=0,n5=0;
    printf("enter your amount:");
    scanf("%d",&amount);
    n100=amount/100;
    printf("%d notes of 100\n",n100);
    amount=amount-(n100*100);
    n50=amount/50;
    printf("%d notes of 50\n",n50);
    n20=amount/20;
    printf("%d notes of 20\n",n20);
    n5=amount/5;
    printf("%d notes of 5\n",n5);



    return 0;
}
