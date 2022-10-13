#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,F=12;
    C=(F-32)/1.8;
    printf("Celsius is %d \n",C);
    F=1.8*C+32;
    printf("Fahrenheit is %d \n",F);
    return 0;
}
