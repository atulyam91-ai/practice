
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of char = %zu bytes\n", sizeof(char));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));

    printf("\nRange of int = %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of char = %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of short = %d to %d\n", SHRT_MIN, SHRT_MAX);

    return 0;
}
