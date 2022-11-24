#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
int main()
{
    float r,a,sp,cp;
    printf("enter the radius\n");
    scanf("%f",&r);

    //perimeter of circle;
    cp=2*pi*r;
    printf(" perimeter of circle %.2f\n",cp);

    //sp is perimeter of square;
    sp=cp;

    //perimeter of the square is sp=4*side(a);
    //side of the square a is;
    a=sp/4;
    printf("\n side a is %f\n",a);

    return 0;
}
/*enter the radius
4.5
 perimeter of circle 28.26

 side a is 7.065000

Process returned 0 (0x0)   execution time : 5.470 s
Press any key to continue.
*/
