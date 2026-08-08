#include<stdio.h>
int maze2(int n, int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){ // not go down
        rightways+=maze2(n,m-1);
    }
    if(m==1){// not go right
        downways+=maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter number of row  maze:");
    scanf("%d",&n);
    int m;
    printf("Enter number of column of the maze:");
    scanf("%d",&m);
    int noOFways = maze2(m,n);
    printf("%d",noOFways);
    return 0;
}