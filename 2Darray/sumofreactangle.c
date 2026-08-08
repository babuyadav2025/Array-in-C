#include<stdio.h>
int main(){
    int arr[4][5];
    printf("Enter all the element of array:");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=1;j<5;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
    }

    
    