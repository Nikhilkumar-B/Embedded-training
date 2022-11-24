#include <stdio.h>
#include <stdlib.h>

struct student{
    int marks;
    char name[30];
}s1,s2;
int main()
{
    printf("enter the marks\n");
    scanf("%d",&s1.marks);
    printf("enter the name\n");
    scanf("%s",s1.name);
    printf("enter the marks\n");
    scanf("%d",&s2.marks);
    printf("enter the name\n");
    scanf("%s",s2.name);
    printf("%d %s\n",s1.marks,s1.name);
    printf("%d %s",s2.marks,s2.name);
    return 0;
}
