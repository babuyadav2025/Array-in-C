#include<stdio.h>
int main(){
int arr[3][4]={{1,0,1,0},{0,1,1,0},{1,1,1,0}};
    // 1 0 1 0
    // 0 1 1 0
    // 1 1 1 0
    int maxcount=0;
    int t=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            t=i;
        }
    }
    int a=t+1;
    printf("row number is %d and max number of 1 is  %d",a,maxcount);
    return 0;
}