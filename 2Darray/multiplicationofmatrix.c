#include<stdio.h>
int main(){
    // multiplication of matrix
    // int arr[2][3]={{1,2,1},{3,2,2}};
    // int brr[3][2]={{3,2},{1,2},{3,4}};
    // int cr=3;
    // int res[2][2];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         res[i][j]=0;
    //         for(int k=0;k<cr;k++){
    //             res[i][j]+=arr[i][k]*brr[k][j];
    //         }
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //        printf("%d ",res[i][j]);
    //     }
    //     printf("\n");
    // }
    // return 0;
    // multiplication of matrix by user input
    int n;
    printf("Enter number of row:");
    scanf("%d",&n);
    int m;
    printf("Enter number of column:");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter all the element of a:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("Enter number of row for b:");
    scanf("%d",&p);
    int q;
    printf("Enter number of column for b:");
    scanf("%d",&q);
    int b[p][q];
    printf("Enter all the element of b:");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    if(m==p){
        int cr=m;
        int res[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<cr;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
               printf("%d ",res[i][j]);
                }
                printf("\n");
            }
            
        }
        else{
            printf("Multiplication of matrix is not possible.");
        }
        return 0;        
}


