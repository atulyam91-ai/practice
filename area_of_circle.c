
#include <stdio.h>

int main()
{
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area in normal format = %f\n", area);
    printf("Area in exponential format = %e\n", area);

    return 0;
}
