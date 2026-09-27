#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("enter values a,b,c,d");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e = a / c;
    f = d / b;
    if (e > f) {
        printf("the fraction a/c is larger with value:\n",e);
    } 
    else if (f > e) {
        printf("the fraction d/b is larger\n",f);
    } else {
        printf("both fraction have same value\n");
    }
    return 0;
}