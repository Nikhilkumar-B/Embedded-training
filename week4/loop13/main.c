#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,place=1,bin;
    printf("enter the value\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        bin=bin+(rem*place);
        place=place*10;
        num=num/2;
    }
    printf("%d",bin);
    return 0;
}
