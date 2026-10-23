#include <stdio.h>
int main(){
    int a[5],i,key,found=0;
    printf("Enter 5 array elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);

    }
    printf("enter key:");
    scanf("%d",&key);

    for(i=0;i<5;i++){
        if (a[i]==key){
            printf("found at index %d",i);
            found=1;
            break;

        }
    
    }
    if (found==0){
        printf("elment not found");
    }
    return 0;
    
}