#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,9};
    int x=4;
    int t=0;
    for(int i=0;i<=7;i++){
        if(arr[i]>x){
            t=t+1;
        }
    }
    printf("%d",t);
    return 0;
}