#include <stdio.h>
#include <stdlib.h>

struct cars
{
    char model[10];
    int price;

} c[4];
int main()
{
    int i,range1,range2;
    printf("enter starting range\n");
    scanf("%d",&range1);
    printf("enter ending range\n");
    scanf("%d",&range2);
    struct cars c[]={{"thar",300000},{"nano",280000},{"bmw",250000},{"aulto",200000}};

    //for(range1=0; range1<=range2; range1--)
        for(i=0;i<=3;i++)
        {
            if(c[i].price>=range1 && c[i].price<=range2)
            {
                printf("%s\n",c[i].model);
            }
        }



    return 0;
}
