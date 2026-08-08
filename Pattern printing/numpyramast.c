#include<stdio.h>
int main(){
    int n;
    printf("Enter a number lines:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  // this for number of line
        for(int j=1; j<=n-i; j++){  // this for spaces
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            int A = 64+k;
            char ch =(char)A;
            printf("%c", ch);
        } 
         int a = 63+i;
        for(int l=1; l<=i-1; l++){
          //  printf("%d", a);
            char ch = (char)a;
            printf("%c", ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}