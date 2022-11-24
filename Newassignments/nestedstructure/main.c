#include <stdio.h>
#include <stdlib.h>
struct colleges
{
    char clg_names[30];

    struct branch
    {
        char b_name[20];
        int marks;


    } b[4];

} c[4];

int main()
{
    int l,m,n;
    struct colleges c[]= {{"gech"},{"jce"},{"jnnc"},{"mit"}};
    struct branch b[]= {{"ece",50},{"cs",60},{"mech",70},{"civil",80}};


    for(l=0; l<=3; l++)
    {
        for(m=0; m<=3; m++)
        {
            printf("%s\t %s\t %d\n",c[l].clg_names,b[m].b_name,b[m].marks);
        }
    }


    //printf("Hello world!\n");
    return 0;
}
