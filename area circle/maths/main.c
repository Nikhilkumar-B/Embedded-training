#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=80,s=38,e=30,k=58,h=68,avg,T,pass,fail,sub;
    T=m+s+e+k+h;
    printf(" total T is %d\n",T);
    avg=T/5;
    printf("average is %d\n",avg);

    if(m<35)
    {
        printf("fail \n");
    }
    if(s<35)
    {
        printf("fail \n");
    }
    if(k<35)
    {
        printf("fail \n");
    }
    if(e<35)
    {
        printf("fail \n");
    }
    if(h<35)
    {
        printf("fail \n");
    }


    if(avg>90)
        printf("distinction \n");
    else if(avg>60)
    {
        printf("first class\n");

    }
    else if(avg>=35)
    {
        printf("second class \n");
    }

    else if(avg<35)
        printf("fail \n");
    else
        printf("with held \n");

    pass=5-fail;
    printf("num of pass sub %d\n",pass);

    return 0;

}
