#include <stdio.h>
int main(){
    int data;
    printf("enter value -1 0 or 1\n");
    scanf("%d",&data);
    switch(data)
    {
        case -1:
        printf("the no is negative");
        break;
        case 0:
        printf("this is 0");
        break;
        case 1:
        printf("the no is positive");
        break;
        default:
        printf("you entered wrong value");
    }


        int x=0 , sum=0;
        while(x<=20)
        {
            sum+=x;
            x=x+1;
        }
        printf("sum of first 20 numbers=%d\n",sum);
        return 0;
        
}