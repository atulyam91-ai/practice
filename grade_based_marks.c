#include <stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if (marks>=90){
        printf("you got A grade for %d marks",marks);
    }
    else if(marks>=80 && marks<90){
        printf("you got B grade for %d marks",marks);
    }
    else if(marks>=70 && marks<80){
        printf("you got C grade for %d marks",marks);
    }
    else if(marks>=60 && marks<70){
        printf("you got D grade for %d marks",marks);
    }
    else{
        printf("you got F grade for %d marks",marks);
    }
}