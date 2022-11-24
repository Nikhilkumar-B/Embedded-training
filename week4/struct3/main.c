#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name;
    int marks;

} s[3];

int main()
{
    int i,j;

    struct student s[]= {{"dev",60}, {"sudhee",80}, {"satya",50}};
    printf("%d", s[1].marks);

    return 0;
}
