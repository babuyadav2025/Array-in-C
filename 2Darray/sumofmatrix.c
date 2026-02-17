#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter al the element of matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("sum of all the element of matrix is %d",sum);
    return 0;

}