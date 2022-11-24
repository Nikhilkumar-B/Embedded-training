#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int a;
    char str[100],str1[200],i,a;
    printf("enter the sentance\n");
    scanf("%[^\n]s",str);
   // printf("%s",str);
for(i=0;i<strlen(str);i++)
{
    if(str[i]!=' ')
{
        str1[a]=str[i];
        a++;
}
else
{
    str[i]=str[i];
}

}
printf("%s",str1);
    return 0;
}
