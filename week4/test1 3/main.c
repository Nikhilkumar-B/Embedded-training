#include <stdio.h>
#include <stdlib.h>


int main(){

    int num =10,pos=2;
    printf("num is%d\n", num);


    num = num |(0x01 << pos);
    printf("set bit is %d\n", num);

    num = num &~(0x01 << pos);
    printf("clear bit is %d\n", num);

    num = num ^ (0x01 << pos);
    printf("toggle bit is %d\n", num);
    return 0;
}
