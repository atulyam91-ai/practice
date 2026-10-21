#include <stdio.h>
int main()
{
    int n, digit, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }
    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
