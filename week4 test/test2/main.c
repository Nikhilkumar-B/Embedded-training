#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,binary,rem,place=1;

    printf("enter the value for num\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        binary=binary+(rem*place);
        place=place*10;
        num=num/2;
    }
    printf("binary value is %d\n",binary);
    return 0;
}
