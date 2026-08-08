// #include<stdio.h>
//  int add(int x, int y){
//      return x+y;
// }
// int main(){
//     int a, b;
//     printf("Enter 1st number :");
//     scanf("%d", &a);
//     printf("Enter 2nd number :");
//     scanf("%d",&b);
//     int sum=add(a,b);
//     printf("The sum of 1st and 2nd number=%d", sum);
//     return 0;
// }
#include <stdio.h>

int main() {
    int matrix[10][10];
    int i, j, M, N, diagSum = 0;

    printf("Enter the number of rows (M): ");
    scanf("%d", &M);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of diagonal elements (where i == j)
    for (i = 0; i < M && i < N; i++) {
        diagSum += matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", diagSum);

    return 0;
}
