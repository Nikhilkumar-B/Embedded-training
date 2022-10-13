#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter values for x,y\n");
    scanf("%d%d",&x,&y);
    if((x>0)&&(y>0))
        printf("lies on first quadrant\n");
    else if((x<0)&&(y>0))
        printf("lies on second quadrant\n");
    else if((x<0)&&(y<0))
        printf("lies on third quadrant\n");
    else if((x>0)&&(y<0))
        printf("lies on fourth quadrant\n");
    else
        printf("zero\n");
    return 0;
}
