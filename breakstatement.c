#include <stdio.h>
int main()
{
    int i;
    printf("enter the vslue of i");
    scanf("%d",&i);
    while (i<6)
    {
        if (i==5)
        {
            printf("value of i is %d\n",i);
            break;

        }
        else
        {
            printf("value of i is %d\n",i);
            i++;
            
        }
    }
}