#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,vowels=0,consonants=0,space=0,digit=0;
    char str[20];
    printf(" enter the string \n");
    scanf("%c",str[i]);

    for(i=1; str[i]<strlen(str); i++)

    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
        {

            vowels+=1;
        }
        else if(str[i]==' ')
        {

            space+=1;
        }
        else if(str[i]>='a'&& str[i]<='z')
        {

            consonants+=1;
        }
        else
            {
                printf("digits %d\n",digit);
            }
        printf("vowels are %d\n",vowels);
        printf("spaces are %d\n",space);
        printf("consonants are %d\n",consonants);

    }
return 0;
}
