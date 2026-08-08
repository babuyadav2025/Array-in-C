#include<stdio.h>
int main(){
    // solid reactangle 
    //  int n;
    //  printf("Enter a number of rows:");
    //  scanf("%d", &n);
    //  int m;
    //  printf("Enter number of column:");
    //  scanf("%d",&m);
    //   for (int i = 1; i <=n; i++){// first loop-> number of line
    //     for (int j = 1; j <=m; j++)// inner loop-> number of star in each line
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }
    int n;
    printf("Enter row and column:");// square so row and column is equale
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}