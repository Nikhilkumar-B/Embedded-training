#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,vowels=0,consonants=0,space=0,digit=0;
    char str[20];
    printf(" enter the string \n");
    scanf("%[^\n]s",str);

    for(i=0; i<strlen(str); i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
        {
            vowels=vowels+1;
        }
        else if(str[i]==' ')
        {
            space=space+1;
        }
        else if(str[i]>='a'&& str[i]<='z')
        {
            consonants=consonants+1;
        }
        else if(str[i]>'0' && str[i]<='9')
        {
            digit=digit+1;
        }

    }
    printf("vowels are %d\n",vowels);
    printf("spaces are %d\n",space);
    printf("consonants are %d\n",consonants);
    printf("digits %d\n",digit);
    return 0;
}
