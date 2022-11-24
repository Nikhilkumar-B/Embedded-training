#include <stdio.h>
#include <stdlib.h>
struct student{
    int date,month,year;
    }s1,s2;

int main()
{
   int date,month,year;
    printf("enter the date of birth\n");
    scanf("%d%d%d",&s1.date,&s1.month,&s1.year);

    printf("enter present date of birth\n");
    scanf("%d%d%d",&s2.date,&s2.month,&s2.year);


    if(s1.year<s2.year)
    {
        year=(s2.year-s1.year);
        //printf("%d\n",year);
    }
    else if(s1.year>s2.year)
    {
        year=(s1.year-s2.year);
        //printf("%d\n",year);
    }
    if(s1.month<s2.month)
    {
        month=(s2.month-s1.month);
        //printf("%d\n",month);
    }
    else if(s1.month>=s2.month)
    {
        year=year-1;
        month=12+(s2.month-s1.month);
        //printf("%d\n",month);
    }
    if(s1.date<s2.date)
    {
        date=(s2.date-s1.date);
        //printf("%d\n",date);
    }
    else if(s1.date>s2.date)
    {
        month=month-1;
        date=30+(s2.date-s1.date);
        //printf("%d\n",date);
    }


printf("%d-%d-%d\n",date,month,year);


    return 0;
}
