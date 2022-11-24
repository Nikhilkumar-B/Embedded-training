#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[400],j;
    for(i=0; i<200; i++)
    {
        for(j=845; j<1000; j++)
        {
            a[i]=(rand()%154+845);
        }
        printf("%d\n",a[i]);
    }
    return 0;
}
