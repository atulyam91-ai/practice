#include <stdio.h>
int main(){
    int arr[100];
    int i;
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("enter element %d-:",i);
        scanf("%d",&arr[i]);
     }
     printf("values stored in the array are:\n");
     for(i=0;i<n;i++){
        printf("%5d",arr[i]);
     }
     printf("\n\n");
     printf("values stored inn array in reverse order:\n");
     for(i=n-1;i>=0;i--){
        printf("%5d",arr[i]);
     }
     printf("\n\n");
     return 0;
    
}