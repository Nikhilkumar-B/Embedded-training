#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,hours;
    float salary,H;
    printf("enter employ id\n",id);
    scanf("%d",&id);
    printf("total works in hours\n",hours);
    scanf("%d",&hours);
    printf("salary in hours\n",salary);
    scanf("%f",&salary);
    H= salary*hours;
    printf("amount received per hour is %.2f",H);
    return 0;
}
