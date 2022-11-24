#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],i,j,n,str1;
    printf("enter the string\n");
    scanf("%s",str);
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(str[j]>str[j+1])
            {
                str1=str[j];
                str[j]=str[j+1];
                str[j+1]=str1;
            }
        }
    }
    printf("alphabetic order %s\n ",str);
    return 0;
}
/*enter the string
GHOST
alphabetic order GHOST

Process returned 0 (0x0)   execution time : 4.720 s
Press any key to continue.

enter the string
nakhul
alphabetic order ahklnu

Process returned 0 (0x0)   execution time : 24.211 s
Press any key to continue.
*/
