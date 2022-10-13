#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=8,b=3,c,d,e,f,g;
    c=a+=b;
    printf("c is %d\n",c);

    d=a-=b;
    printf("d is %d\n",d);

    e=a*=b;
    printf("e is %d\n",e);

    f=a/=b;
    printf("f is %d\n",f);

    g=a%=b;
    printf("g is %d\n",g);
    return 0;
}
