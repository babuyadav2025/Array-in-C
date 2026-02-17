#include<stdio.h>
int main(){// difference bet even indicis and odd indicis
    int arr[7]={1,2,3,4,5,15,7};
    int s=0,t=0;
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            s=s+arr[i];
        }
        else{
            t=t+arr[i];
        }
    }
    printf("%d",t-s);

    return 0;
}