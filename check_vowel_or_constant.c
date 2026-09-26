#include <stdio.h>
#include <ctype.h>
int main(){
    char alpha;
    printf("enter an alphabet");
    scanf("%c",&alpha);
    alpha=tolower(alpha);
    if (alpha=='a' || alpha=='i' || alpha=='e' || alpha=='o' || alpha=='u'){
        printf("%c is vowel",alpha);
    }
    else if(alpha>='a' && alpha<='z') {
        printf("%c is consonant",alpha);
    }
    else
    {
        printf("Please enter an alphabet");
    }
}