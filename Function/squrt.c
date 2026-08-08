// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a; printf("Enter a number:");
//     scanf("%d",&a);
//     int root = sqrt(a);
//     printf("Squart root of number =%d", root);
//     return 0;
// }
#include <stdio.h>

#define MAX 10  // Maximum size of the matrix

int main() {
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX], product[MAX][MAX];
    int i, j, k, N;

    printf("Enter the order N of the matrices (N x N): ");
    scanf("%d", &N);

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Multiplication
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            product[i][j] = 0;
            for (k = 0; k < N; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Sum
    printf("\nSum of Matrix A and B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Print Product
    printf("\nProduct of Matrix A and B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
