#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=5000,t=3,r=0.065,n=4;
    float a;
    a=p*(1+r/n)^n*t;
    printf("com in is %f\n",a);
    return 0;
}
