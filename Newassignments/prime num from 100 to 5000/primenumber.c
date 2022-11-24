#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count;
    //printf("enter value for n\n");
    //scanf("%d",&n);

    for(i=100; i<=500; i++)
    {
        count=0;
        for(n=1; n<=500; n++)
        {
            if(i%n==0)
            {
                count++;

            }
        }
            if(count==2)
            {
                printf(" %d is  prime \n",i);

            }
    }

    return 0;
}
/*
 101 is  prime
 103 is  prime
 107 is  prime
 109 is  prime
 113 is  prime
 127 is  prime
 131 is  prime
 137 is  prime
 139 is  prime
 149 is  prime
 151 is  prime
 157 is  prime
 163 is  prime
 167 is  prime
 173 is  prime
 179 is  prime
 181 is  prime
 191 is  prime
 193 is  prime
 197 is  prime
 199 is  prime
 211 is  prime
 223 is  prime
 227 is  prime
 229 is  prime
 233 is  prime
 239 is  prime
 241 is  prime
 251 is  prime
 257 is  prime
 263 is  prime
 269 is  prime
 271 is  prime
 277 is  prime
 281 is  prime
 283 is  prime
 293 is  prime
 307 is  prime
 311 is  prime
 313 is  prime
 317 is  prime
 331 is  prime
 337 is  prime
 347 is  prime
 349 is  prime
 353 is  prime
 359 is  prime
 367 is  prime
 373 is  prime
 379 is  prime
 383 is  prime
 389 is  prime
 397 is  prime
 401 is  prime
 409 is  prime
 419 is  prime
 421 is  prime
 431 is  prime
 433 is  prime
 439 is  prime
 443 is  prime
 449 is  prime
 457 is  prime
 461 is  prime
 463 is  prime
 467 is  prime
 479 is  prime
 487 is  prime
 491 is  prime
 499 is  prime

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.*/
