#include <stdio.h>
int main()
{int x=0 , sum=0;
        while(x<=20)
        {
            sum+=x;
            x=x+1;
        }
        printf("sum of first 20 numbers=%d",sum);
        return 0;
    }