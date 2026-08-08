#include<stdio.h>
int main(){
    // print floyd triangle
    // int n;
    // printf("Enter a number :");
    // scanf("%d",&n);
    // int a = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("%d ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }
    // print 0 and 1 triangle
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int a;
    for(int i=1; i<=n; i++){
        if(i%2!=0) a = 1;
        else a = 0;
        for(int j=1; j<=i; j++){
            printf("%d ", a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }

    return 0;
}