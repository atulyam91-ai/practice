#include <stdio.h>
int main()
{
    int number;
    printf("enter an integer:");
    scanf("%d",&number);
    if(number<0) {
        printf("you entered negative number");
    }
}