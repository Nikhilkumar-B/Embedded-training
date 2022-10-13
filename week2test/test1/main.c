#include <stdio.h>
#include <stdlib.h>

int main()
{
    float units,bill;
    printf("enter the units\n");
    scanf("%f",&units);

    if(units<=219)
    {
        bill=units*1.10;

    }
    else if((units>=220)&&(units<=500))
    {
        bill=(219*1.10)+(units-219)*1.45;
        {
            bill=bill*1.12;
        }
        printf("the bill is %f",bill);

    }
    else if(units>=500)
    {
        bill=((219*1.10)+(280*1.45)+((units-500)*1.90))*1.12;
    }
    if(bill==450)
    {
        bill=bill+((bill*12)/100);
    }
    else if(bill<=100)
    {
        bill=120;
    }

    printf("%f",bill);
    return 0;
}
