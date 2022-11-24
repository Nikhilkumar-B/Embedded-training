#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[100],fr[100],m,n,temp,ctr;
    for(i=0; i<50; i++)
    {
        a[i]=(rand()%100);
        fr[i]=-1;
        //printf("%d\n",a[i]);
    }

    for(m=0; m<50; m++)
    {
          ctr=1;
        for(n=m+1; n<50; n++)
        {

            if(a[m]==a[n])
            {
                temp=fr[m];
                fr[m]=fr[n];
                fr[n]=temp;
                ctr++;
                fr[n]=0;
            }
       }
        if(fr[m]!=0)
        {
            fr[m]=ctr;
        }
    }
    for(m=0; m<50; m++)
    {
        if(fr[m]!=0){

        printf("%d repeated in %d times \n",a[m],fr[m]);
        }
    }

    return 0;
}

