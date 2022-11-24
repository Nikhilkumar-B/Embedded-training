#include <stdio.h>

int a,b;
int main()
{

    printf("enter the values for a and b\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    return 0;
}
int swap(int *M, int *N)
{
    int temp=*M;
    *M=*N;
    *N=temp;

    printf("%d %d",*M,*N);
    return 0;
}
