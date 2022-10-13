#include <stdio.h>
#include <stdlib.h>

int main()
{
    char me;
    printf("enter any character %c\n");
    scanf("%c",&me);
    if((me=='a')||(me=='e')||(me=='i')||(me=='o')||(me=='u')||(me=='A'))
    printf("character is vowel");
    else if(me==' ')
    {
        printf("character is space");

    }
    else
        printf("character is consonant");
    return 0;
}
