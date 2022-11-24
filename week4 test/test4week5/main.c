#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,j,num,num3;

    printf("enter first number\n");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    for(i=1;i<=num1 || i<=num2;i++)
    {
        //for(j=1;j<=num2;j++)
        //{
            if(num1%i==0 && num2%i==0)
            {
                num=i;
                //num3=j;
            }
        //}
    }
    printf("the hcf is %d\n",num);
    //printf("the hcf is %d\n",num3);

    return 0;
}
