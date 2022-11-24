#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,a,b;
    printf("enter the string\n");
    scanf("%[^\n]s",str);

    printf("start\n");
    scanf("%d",&a);

    printf("end\n");
    scanf("%d",&b);

   for(i=a;i<=b;i++)
{
       printf("%c",str[i]);
}

    return 0;
}
