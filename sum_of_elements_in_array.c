#include <stdio.h>
int main(){
    int arr[100];
    int i;
    int sum=0;
    int n;
    printf("enter noof elemnts in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element-%d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];

    }
    printf("sum of all elements in the array is %d",sum);
    return 0;
}