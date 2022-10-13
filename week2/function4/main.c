#include <stdio.h>
#include <stdlib.h>

char str_fun(a)
{
  printf("hello %s !!",a);
  return a;
}
int main()
{
    char name[10],a;
    printf("enter a string \n");
    scanf("%s",a);
    str_fun(a);

}
