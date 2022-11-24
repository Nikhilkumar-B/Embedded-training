#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll_num;
    int age;

} s[3];

int main()
{
    int i,s;
    char tempname[20];

    struct student s[3] = {{"dev",20,25}, {"sudhee",18,22}, {"satya",23,17}};

    printf("enter the name to check\n");
    scanf("%s", tempname);
    for (i=0; i<=3; i++)
    {
        if(tempname==s[i].name)
        {

        }
    }

    printf("%s",s[i]);



    return 0;
}
