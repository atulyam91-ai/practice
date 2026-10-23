#include <stdio.h>
int main(){
    int arr[5];
    int i,j,tmp;
    
    for(i=0;i<5;i++){
        printf("element - %d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if (arr[j]< arr[i]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("elements of array in ascending order:");
    for (i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}