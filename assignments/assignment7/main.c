#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1; i<5; i++)
    {
       sleep(5);

       if(i==1)
       {
           printf("shimoga is arrived\n");

           sleep(3);
           printf("\n shimoga is deparched \n");
       }
       if(i==2)
       {
           printf("\n bhadravathi is arrived\n");
           sleep(3);
           printf("\n bhadravathi is deparched\n");
       }
        if(i==3)
       {
           printf("\n hassan is arrived\n");

           sleep(3);
           printf("\n hassan is deparched \n");
       }
       if(i==4)
       {
           printf("\n mysore is arrived\n");
           sleep(3);
           printf("\n mysore is deparched\n ");
       }

    }
    return 0;
}
