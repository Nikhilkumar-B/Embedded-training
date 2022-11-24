#include <stdio.h>
#include <stdlib.h>


#include<stdio.h>

main()
{
   struct student v{

       int num = 10;
   }var;

   printf("%d", var.num);
}
/*struct students {

    char name[100];
    int id;
}s[10];


int main()
{
    int i,ran[20],arr[10]={11,12,13,14,15,16,17,18,19,20};
    //struct students s[10]={{"karna",11},{"bheema",12},{"sudhee",13},{"manoj",14},{"sanju",15},{"amruth",16},{"kiran",17},{"shashi",18},{"sampath",19},{"koti",20}};
    for(i=11;i<=20;i++){

    ran[i]=(rand()%10);
    printf("%d\n",ran[i]);
    }
    return 0;
}*/
