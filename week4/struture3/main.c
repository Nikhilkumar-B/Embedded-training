#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[10];
    int marks;
    int id;

}s[4],temp;

int main()
{
    int i,j;
    struct student s[4]={{"vikram",45,1},{"yashu",72,2},{"vinay",83,3},{"ajay",78,4}};

    for(i=0;i<=3;i++)
    {
        //scanf("%s",s[i]);
        for(j=i+1;j<=3;j++)
        {
            if(s[i].marks < s[j].marks)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<=3;i++)
    printf("descending order is %s %d %d\n",s[i].name,s[i].marks,s[i].id);

    for(i=0;i<=3;i++)
    {
        if(s[i].marks>80)
        {
            printf("%s",s[i].name,s[i].id);
        }

        if(s[i].marks<50)
        {
            printf("\n%s",s[i].name,s[i].id);
        }
    }
    return 0;
}
