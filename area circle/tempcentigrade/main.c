#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("temperature is \n");
    scanf("%d",&temp);
    if(temp<0)
        printf("freezing weather \n");
    else if(temp<10)
        printf("very cold weather \n");
    else if(temp<20)
        printf("cold weather");
    else if(temp<30)
        printf("normal weather");
    else if(temp<40)
        printf("it is hot");
    else if(temp>=40)
        printf("very hot\n");
    else
        printf("out of range\n");

    return 0;
}
