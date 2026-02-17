#include<stdio.h>
int main(){
 int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int brr[3][3]={9,8,7,6,5,4,3,2,1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int crr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
                 }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}