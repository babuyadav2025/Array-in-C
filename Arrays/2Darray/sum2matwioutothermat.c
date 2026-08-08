#include<stdio.h>
int main(){
    int r,c;
    printf("enter number of row and column:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[r][c];
    printf("enter element of first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter element of second matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]+=b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}