#include <stdio.h>
#include <stdlib.h>

int main()
{

    char me;
    printf("enter any character %c\n");
    scanf("%c",&me);
    if(me=='')
    printf("character is vowel");
    else
    printf("character is consonant");
    return 0;
}
