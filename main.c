#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days=1329;
    int year=days/365;
    int week=(days%365)/7;
    int day=(days/365);
    printf("year=%d\n",year);
    printf("week=%d\n",week);
    printf("day =%d\n",day);

}
