#include<stdio.h>
int main(){// for max value
    int arr[5]={45,230,673,87,9};
    int max=arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}