#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);

    if((num%7==0)&&(num%11==0))
       {
        printf("num is mul of 7 and 11\n");
       }
    else if(num%11==0)
        {

        printf("num is mul of 11\n");
        }

        else if(num%7==0)
        {
            printf("num is mul of 7\n");
        }

            else
                printf("num is invalid");





    return 0;
}
