#include <stdio.h>
#include <stdlib.h>
struct employ
{
    char name[50],position[50];
    int id;
}s1,s2,s3;
int main()
{
    printf("enter id \n");
    scanf("%d",&s1.id);
    printf("enter the name\n");
    scanf("%s",&s2.name);
    printf("enter the position\n");
    scanf("%s",&s3.position);

    printf("id is %d\n name is %s\n position is %s\n", s1.id,s2.name,s3.position);
    return 0;
}
