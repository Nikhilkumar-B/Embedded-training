#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;

    for(temp=20; temp<=35;temp++)
    {
        //sleep(5);
        if(temp>=25)
        {
            sleep(1);
            printf("switch ON \n");
            printf("%d\n",temp);
        }
        if(temp==35)
        {
            sleep(1);
            printf("switch OFF\n");

        for(temp=35; temp>=25;temp++)
        {
            temp=temp-2;
            sleep(1);
            printf("%d\n",temp);

        }
        }
        //printf("\n");

    }
    return 0;
}
