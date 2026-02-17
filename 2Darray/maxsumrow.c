#include<stdio.h>
int main(){
int arr[3][4]={{1,3,4,2},{4,3,2,5},{1,6,2,3}};
    // 1 3 4 2
    // 4 3 2 5
    // 1 6 2 3
    int maxsum=0;
    int t=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
             t=i;
        }
    }
    int a=t+1;
    printf("%d %d",a,maxsum);
    return 0;
}