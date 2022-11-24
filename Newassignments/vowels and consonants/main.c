#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n,m;
    char str[20],vowels[20],consonants[20];
    printf(" enter the string \n");
    scanf("%s",str);

    for(i=0; i<strlen(str); i++)
    {

        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
        {
            // ctr++;
            vowels[i]=str[i];
            //i++;

        }
        else
        {
            //ctr++;
            consonants[i]=str[i];
            //i++;
        }
    }
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==vowels[i])
        {

            printf("vowels are %c\n",vowels[i]);

        }
    }
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==consonants[i])
        {
            printf("consonants are %c\n",consonants[i]);
        }
    }

    return 0;

}
