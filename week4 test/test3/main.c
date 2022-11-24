#include <stdio.h>
#include <stdlib.h>

struct cars
{
    char model[4];
    int price;

} c[4];
int main()
{
    int i,range1,range2,model;
    printf("enter starting range");
    scanf("%d",&range1);
    printf("enter ending range\n");
    scanf("%d",&range2);
    struct cars c[4]= {{"thar",300000},{"nano",280000},{"bmw",250000},{"aulto",200000}};

    //for(range1=0; range1<=range2; range1--)
    {
        for(i=0; i<=4; i++)
        {
            if(c[i].price>=range1 || c[i].price<=range2)
            {
                printf("%s",c[i].model);
            }
        }

    }


    return 0;
}
