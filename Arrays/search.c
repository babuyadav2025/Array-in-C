#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,9,10,6,7};
    int x=5;
    int idx = -1;
    bool flage = false;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flage = true;
            idx = i;
            break;
        }
    }
    if(flage==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d present in the array and its index is %d",x,idx);
    }
    return 0;
}