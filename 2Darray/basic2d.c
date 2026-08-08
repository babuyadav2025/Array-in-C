#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column:");
    scanf("%d %d",&r,&c);
     int arr[r][c];
      for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
             scanf("%d",&arr[i][j]);
         }
     }
     printf("\n");
     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
             printf("%d ",arr[i][j]);
         }
         printf("\n");
     }
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    // 1 2
    // 3 4
    return 0;
}