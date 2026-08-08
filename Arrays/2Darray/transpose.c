#include<stdio.h>
int main(){
    // print transpose of a matrix
    // int arr[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",arr[j][i]);
    //     }
    //     printf("\n");
    // }
    // print transpose of a matrix and store it on a matrix
    
    int row;
    printf("Enter number of row:");
    scanf("%d",&row);
    int col;
    printf("Enter number of column:");
    scanf("%d",&col);
    int arr[row][col];
    printf("Enter all the element of array:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[col][row];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",brr[i][j]);
              }
        printf("\n");
    }
    return 0;

}