#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=4,c,d,e,f,g,h,i;
    c=(a&b);
    printf("the c is %d\n",c);
    d=(a|b);
    printf("the d is %d\n",d);
    e=(a^b);
    printf("the e is %d\n",e);
    f=(~a);
    printf("the f is %d\n",f);
    g=(a<<1);
    printf("the g is %d\n",g);
    h=(a>>3);
    printf("the h is %d\n",h);
    return 0;
}
