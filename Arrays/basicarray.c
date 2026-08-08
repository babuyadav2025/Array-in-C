#include<stdio.h>
int main(){
     int arr[5];
     for(int i=0;i<=4;i++){
        printf("Enter element no %d :",i+1);
        scanf("%d",&arr[i]);
        
     }
    for(int i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
     
    // int arr[3];
    // printf("Enter first element:");
    // scanf("%d",&arr[0]);
    //  printf("Enter second element:");
    // scanf("%d",&arr[1]);
    //  printf("Enter third element:");
    // scanf("%d",&arr[2]);
     
    // printf("%d",arr[0]);

    
    return 0;
}